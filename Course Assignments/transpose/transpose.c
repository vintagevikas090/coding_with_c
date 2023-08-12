
#include <stdio.h>

int main(){
    int n_ps, n_qs;

    printf("Enter number of ps for the matrix (>=3 and <=10): ");
    scanf("%d", &n_ps);
    // now check if the p is >=4 and <=10, if not
    // provide an error message and return from main
    if (n_ps < 3 || n_ps > 10){
        printf("Invalid number of ps, acceptable is >=3 and <=10");
        return 0;
    }

    printf("Enter number of qumns for the matrix(>=3 and <=10): ");
    scanf("%d", &n_qs);
    // now check if the qumn is >=4 and <=10, if not
    // provide an error message and return from main
    if (n_qs < 3 || n_qs > 10){
        printf("Invalid number of qumns, acceptable is >=3 and <=10");
        return 0;
    }

    // declare the array
    int mat[n_ps][n_qs];


    // dimension is good.
    // read data from user and place into matrix
    int pIndex, qIndex;

    for(pIndex = 0; pIndex < n_ps; ++pIndex){
        for(qIndex = 0; qIndex < n_qs; ++qIndex){
            // prompt to provide input for mat[pIndex][qIndex]
            printf("Matrix[%d][%d]: ", pIndex, qIndex);
            // read using scanf
            scanf("%d", &mat[pIndex][qIndex]);
        }
    }

    // Now display the matrix as it is:
    printf("Matrix as given by you: \n");
    for(pIndex = 0; pIndex < n_ps; ++pIndex){
        for(qIndex = 0; qIndex < n_qs; ++qIndex){
            printf("%6d", mat[pIndex][qIndex]);
        }
        printf("\n");
    }
    printf("\n\n");

    // Now print the transpose
    printf("Transpose of the given matrix: \n");
    for(qIndex = 0; qIndex < n_qs; ++qIndex){
        for(pIndex = 0; pIndex < n_ps; ++pIndex){
            printf("%6d", mat[pIndex][qIndex]);
        }
        printf("\n");
    }
    printf("\n\n");


    return 0;
}
