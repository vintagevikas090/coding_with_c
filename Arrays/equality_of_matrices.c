#include<stdio.h>
#include<stdlib.h>

//program to check if two given matrices are equal or not

int main()
{
    int mat1[2][2], mat2[2][2];
    int k = 0;
    printf("For matrix 1.\n");
    for(int i= 0; i<2; i++){
        printf("Enter row no %d\n", k+1);
        for(int j=0; j<2; j++){
            scanf("%d", &mat1[i][j]);
        }
        k++;
    }
    k =0;
    printf("For matrix 2.\n");
    for(int i= 0; i<2; i++){
        printf("Enter row no %d\n", k+1);
        for(int j=0; j<2; j++){
            scanf("%d", &mat2[i][j]);
        }
        k++;
    }

    for(int i= 0; i<2; i++){
        for(int j=0; j<2; j++){
            if(mat1[i][j]!=mat2[i][j]){
                printf("Matrices are not equal.\n");
                break;
            }
        }
    }

    return 0;
}