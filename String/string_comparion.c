#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Write a program in C to compare two strings without using string library functions

int main()

{
    
    char str1[80], str2[80];
    int i, n, L1, L2;
    i=n=L1=L2= 0;

    printf("Enter 1st string: ");
    fgets(str1, 80, stdin);
    printf("Enter 2nd string: ");
    fgets(str2, 80, stdin);

    printf("1st String is: %s\n", str1);
    printf("2nd String is: %s\n", str2);

    for (i=0; str1[i]!='\0'; i++)
        L1++;

    for (i=0; str2[i]!='\0'; i++)
        L2++;

    if (L1 == L2)
    {   for(i=0, n=0; (i<=L1 || n<= L2); i++, n++)
        if (str1[i] == str2[n]);
            printf("Given strings are equal.");
    }
    else
        printf("Given strings are not equal.");

      return 0;
}