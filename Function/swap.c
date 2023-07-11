#include<stdio.h>
#include<stdlib.h>

 void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x =  *y;
    *y = temp;
 }

int main()
{   
    int a, b;
    printf("Enter two integer: ");
    scanf("%d %d", &a, &b);
    printf("The values given respectively before swap are %d %d\n", a, b);
    swap(&a, &b);
    printf("The values after swap are %d %d", a, b);
    
    return 0;
}