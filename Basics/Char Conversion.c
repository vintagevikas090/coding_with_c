#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    printf("Enter a Alphabet: ");
    scanf("%c", &character);

    if (character>='A' && character<='Z')
    {
        character+=32;
        printf("Corresponding lower case alphabet is %c\n", character);
    }
    else if (character>='a' && character<='z')
    {
        character-=32;
        printf("Corresponding upper case alphabet is %c\n", character);
    }
    else printf("Given Character is not an alphabet");

    return 0;
}
