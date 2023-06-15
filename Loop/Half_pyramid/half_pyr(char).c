
#include<stdio.h>
#include<stdlib.h>

// A 
// B B 
// C C C 
// D D D D 

int main()
{
    int i, j, rows;
    char ch = 'A';
    printf("Enter the height of pyramid(no of rows): ");
    scanf("%d", &rows);
    for(i =0; i<rows; i++){
        for(j = 0; j<=i; j++){
            printf("%c ", ch);
        }
        ch++;
        printf("\n");
    }
    
    return 0;
}