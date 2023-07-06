#include<stdio.h>
#include<stdlib.h>

//print boundary elements of a 4*4 matrix given by user

/*if given input is:
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4

output should be as:
    1 2 3 4
    1     4
    1     4
    1 2 3 4

*/

void input_matrix(int i, int j, int matrix[i][j]){
    int k = 0;
    for(int i = 0; i<4; i++){
        printf("Enter the value for row %d \n", k+1);
        for(int j = 0; j<4; j++){
            scanf("%d", &matrix[i][j]);
        }
        k++;
    }
}

int main()
{
    int mat[4][4];
    printf("Enter the matrix: \n");
    input_matrix(4, 4, mat);

    printf("Matrix given as input.\n");
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Corresponding boundary matrix is: \n\n");
    for(int i = 0; i<4; i++){
        for(int j=0 ; j<4; j++){
            if(i==0||j==0||i==3||j==3){
                printf("%d ", mat[i][j]);
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}