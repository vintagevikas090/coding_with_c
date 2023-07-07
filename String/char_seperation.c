#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 //Write a program in C to separate individual characters from a string

int main()

{
   
    char str[80];
    int i;

    printf("Enter the string: ");
    fgets(str, 80, stdin);

    for (i = 0; str[i]!='\0'; i++)
    printf("%c ", str[i]);


      return 0;
}