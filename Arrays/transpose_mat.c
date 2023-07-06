#include<stdio.h>
#include<stdlib.h>

//transpose of the matrix is found by displacing the rows to column and column to rows

int main()
{
    int mat[3][3], trans[3][3];
    int k =0;
    printf("Enter the matrix\n");
    for(int i = 0; i<3; i++){
        printf("Enter the value for row %d \n", k+1);
        for(int j = 0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            trans[i][j]= mat[j][i];
        }
    }
    printf("Transpose of the given matrix is given as: \n\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}