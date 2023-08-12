#include<stdio.h>
#include<stdlib.h>

// Find sum of all numbers which are divisible by 3 
// but not divisible by 5 up to a positive integer n.

int main()
{
    int n, sum;
    sum = 0;
    printf("Enter the number ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        if(i%3 == 0 && i%5 != 0){
            sum+=i;
        }
    }
    printf("%d", sum);
    
    return 0;
}