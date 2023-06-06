#include <stdio.h>
#include <stdlib.h>

//Write a C program to check whether a given number is positive or negative

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num>=0)
        printf("Given Number is positive.");
    else
        printf("Number is Negative.");

    return 0;
}

