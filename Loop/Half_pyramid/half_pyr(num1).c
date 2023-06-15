#include<stdio.h>
#include<stdlib.h>


// 1
// 2 3
// 4 5 6
// 7 8 9 10

int main()
{
    int i, j, rows;
    int k = 1;
    printf("Enter the height of pyramid(no of rows): ");
    scanf("%d", &rows);
    for(i =0; i<rows; i++){
        for(j = 0; j<=i; j++){
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    
    return 0;
}