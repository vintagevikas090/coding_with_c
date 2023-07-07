#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 // Write a program in C to copy one string to another string

int main()

{
   
    char str[80], str1[80];
    int l;

    printf("Enter a string: ");
    fgets(str, 80, stdin);
    printf("Enter a string: ");
    fgets(str1, 80, stdin);

    l= strlen(str1);

    strcpy(str, str1);

    printf("String replaced at place of first is %s\n", str1);

    printf("Total character copied are %d\n", l);


      return 0;
}