#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 //Write a program in C to print individual characters of a string in reverse order.

int main()

{
   
    char str[80];
    int i, n;

    printf("Enter the string: ");
    fgets(str, 80, stdin);
    n = strlen(str);

    for (i =n; i>=0; i--)
    printf("%c ", str[i]);


      return 0;
}