#include<stdio.h>
#include<stdlib.h>

//program to find some power of any number

int power_of_num(int a, int b){
    int i= 1;
    if(i<=b){
        return a*power_of_num(a, b-1);
        i++;
    }
}

int main()
{
    int base, power, value;
    printf("Enter the base number and power respectively: \n");
    scanf("%d %d", &base, &power);
    value = power_of_num(base, power);
    printf("%dth power of %d is = %d", power, base, value);
    
    return 0;
}