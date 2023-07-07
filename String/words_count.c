#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Write a program in C to count the total number of words in a string

int main()

{
    char str[80];
    int i, count;
    count = 0;

    printf("Enter the string: ");
    fgets(str, 80, stdin);

    for (i = 0; str[i]!='\0'; i++)
        {
            if(str[i]==' ' || str[i]=='.' || str[i]== '\n')
            count++;
        }

    printf("The number of words are %d", count);

      return 0;
}