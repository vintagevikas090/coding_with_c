
#include<stdio.h>
#include<stdlib.h>

//identify if given character is alphabet or not

void idfchar(char ch);

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    idfchar(ch);

    return 0;
}

void idfchar(char ch){ 
    int n;
    n = (int)(ch);
    if(n>=65 && n<=91){
        printf("Uppercase alphabet.\n");
    }
    else if(n>= 97 &&n <= 123){
        printf("Lowercase alphabet.\n");
    }
    else
        printf("Not an alphabet.\n");
}