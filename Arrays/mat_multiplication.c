#include<stdio.h>
#include<stdlib.h>

//program to multiply two matrices

void multiply(int mat1[3][3], int mat2[3][3], int res[3][3])
{
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            res[i][j] = 0;
            for (k = 0; k < 3; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}

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
    int mat[3][3], mat1[3][3], mult[3][3];
    printf("Enter the matrix 1\n");
    input_matrix(3, 3, mat);
    printf("Enter the matrix 2\n");
    input_matrix(3, 3, mat1);
    int i, j;
    multiply(mat, mat1, mult);

    printf("Multiplication of the given matrices is given as: \n\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}