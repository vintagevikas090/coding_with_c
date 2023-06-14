#include<stdio.h>

//program to find sum of the number in table of the number given by user

int main(){

    int n, p, sum;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i = 1; i<=10; i++){
        p = n*i;
        sum+=p;
    }
    printf("Sum of the numbers in table of %d is = %d.", n, sum);

    return 0;
}