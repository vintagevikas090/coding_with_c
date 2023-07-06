#include<stdio.h>
#include<stdlib.h>

//trace = sum of the diagonal elements of the matrix
// write a program to find trace of a matrix

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
    int sum = 0;
    printf("Enter the matrix: \n");
    input_matrix(4, 4, mat);
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i==j){
                sum+=mat[i][j];
            }
        }
    }
    printf("Trace of the matrix is %d", sum);

    return 0;
}