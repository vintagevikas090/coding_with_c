#include<stdio.h>

//program to find sum of n natural numbers

int sum_of_natno(int a){
    int sum = 0;
    if(a>0){
    return a + sum_of_natno(a-1);
    }
}

int main(){

    int n, sum;
    printf("Enter the number: ");
    scanf("%d", &n);
    sum = sum_of_natno(n);
    printf("Sum of %d natural numbers is %d", n, sum);

    return 0;
}