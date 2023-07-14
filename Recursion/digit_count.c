#include<stdio.h>
#include<stdlib.h>

int digit_count(int n){
    static int count;
    if(n!=0){
        count++;
        digit_count(n/10);
    }
    return count;
}

int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("Total number of digits in the given number is %d", digit_count(num));
    
    
    return 0;
}