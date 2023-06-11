#include<stdio.h>

int main(){

    int n, sum, i;
    sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        sum+=i;
    }
    printf("Sum of %d natural numbers is %d.", n, sum);

    return 0;
}