#include<stdio.h>
#include<stdlib.h>

void input_matrix(int i, int j, int matrix[i][j]){
    int k = 0;
    for(int i = 0; i<3; i++){
        printf("Enter the value for row %d \n", k+1);
        for(int j = 0; j<3; j++){
            scanf("%d", &matrix[i][j]);
        }
        k++;
    }
}

int main()
{
    int mat[3][3], mat1[3][3], sum[3][3];
    printf("Enter the matrix 1\n");
    input_matrix(3, 3, mat);
    printf("Enter the matrix 2\n");
    input_matrix(3, 3, mat1);


    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            sum[i][j] = (mat[i][j] + mat1[i][j]);
        }
    }
    printf("Sum of the given matrices is given as: \n\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}