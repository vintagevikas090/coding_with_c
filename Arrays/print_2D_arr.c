#include <stdio.h>

int main()
{
    int x[3][2];
    for(int i= 0; i<3; i++){
        for(int j = 0; j<=2; j++){
            scanf("%d", &x[i][j]);
        }
    }
    for(int i= 0; i<3; i++){
        for(int j = 0; j<=2; j++){
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}