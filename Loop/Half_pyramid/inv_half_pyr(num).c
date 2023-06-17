#include<stdio.h>
#include<stdlib.h>

// 5 5 5 5 5 
// 4 4 4 4 
// 3 3 3 
// 2 2 
// 1 

int main()
{
    int i, j, rows;
    printf("Enter the height of pyramid(no of rows): ");
    scanf("%d", &rows);
    for(i =rows; i>0; i--){
        for(j = 0; j<i; j++){
            printf("%d ", rows);
        }
        rows--;
        printf("\n");
    }
    
    return 0;
}