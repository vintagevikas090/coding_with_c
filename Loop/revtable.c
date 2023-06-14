#include<stdio.h>

//program to print reverse table of any number

int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i = 10; i>= 1; i--){
        printf("%d * %d = %d\n", n, i, n*i);
    }

    return 0;
}