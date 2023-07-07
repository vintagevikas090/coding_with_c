#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Write a program in C to count the total number of vowels or consonants in a string.

int main()

{

    char str[80];
    int i, vwl, cnst;
    vwl = cnst =0;

    printf("Enter the string: ");
    fgets (str, 80, stdin);

    for (i = 0; str[i]!='\0'; i++)
        if (str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'|| str[i]=='i'||
            str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
            vwl++;
        else if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
            cnst++;

    printf("Total consonants are: %d\n", cnst);
    printf("Total vowels are: %d\n", vwl);

    return 0;
}