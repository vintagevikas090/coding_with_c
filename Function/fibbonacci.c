#include<stdio.h>

//program to find a particular term in fibbonacci series

int fibboancci(int a){
   
    if(a==1)
        return 0;
    else if(a==2)
        return 1;
    else
        return  fibboancci(a-1) + fibboancci(a-2);
}

int main(){

    int n, value_of_n;
    printf("Enter the position of term whose value you want: ");
    scanf("%d", &n);
    value_of_n = fibboancci(n);
    printf("Value of the %dth terms of fibbonacci series is %d", n, value_of_n);

    return 0;
}