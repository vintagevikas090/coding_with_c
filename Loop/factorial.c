#include<stdio.h>

int main(){

    int i, factorial, n;
    factorial= 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i = n; i>0; i--){
            factorial*=i;
    }
    printf("Factorial of the given number is %d", factorial);

    return 0;
}