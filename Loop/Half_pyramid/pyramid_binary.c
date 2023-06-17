#include<stdio.h>
#include<stdlib.h>

// 0 
// 1 0 
// 0 1 0 
// 1 0 1 0 
// 0 1 0 1 0

int main()
{
    int i, j, rows;
    printf("Enter the height of pyramid(no of rows): ");
    scanf("%d", &rows);
    for(i =0; i<rows; i++){
        for(j = 0; j<=i; j++){
            if((i+j)%2==0){
                printf("0 ");
            }
            else
                printf("1 ");
        }
        printf("\n");
    }
    
    
    return 0;
}