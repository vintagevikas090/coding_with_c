#include<stdio.h>
#include<stdlib.h>

// * 
// * * 
// * * * 
// * * * * 
// * * * * *
// * * * *
// * * *
// * *
// *

int main()
{
    int i, j, rows;
    printf("Enter the height of pyramid(no of rows): ");
    scanf("%d", &rows);
    for(i =0; i<rows; i++){
        for(j = 0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i =rows; i>0; i--){
        for(j = 0; j<(i-1); j++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}