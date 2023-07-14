#include<stdio.h>
#include<stdlib.h>

//Write a program in C to find the sum of digits of a number using recursion.

int sum_of_digits(int n){
    static int sum;
    if(n/10 == 0){
        return sum+n;
        
    }
    int reminder = n%10;
    sum+=reminder;
    sum_of_digits(n/10);
}

int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("Sum of the all digits in the %d given by you is %d", num, sum_of_digits(num));
    
    return 0;
}