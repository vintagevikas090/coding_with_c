#include<stdio.h>
#include<stdlib.h>

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5
// 6 6 6 6 6 6
// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2
// 1

int main()
{
    int i, j, rows;
    int k = 1;
    printf("Enter the height of pyramid(no of rows): ");
    scanf("%d", &rows);
    for(i =0; i<rows; i++){
        for(j = 0; j<=i; j++){
            printf("%d ", k);
        }
        k++;
        printf("\n");
    }
    for(i =rows; i>0; i--){
        for(j = 0; j<(i-1); j++){
            printf("%d ", (k-2));
        }
        k--;
        printf("\n");
    }
    
    return 0;
}