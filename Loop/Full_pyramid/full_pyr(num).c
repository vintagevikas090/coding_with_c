#include <stdio.h>
  
//         1 
//       2 2 2 
//     3 3 3 3 3 
//   4 4 4 4 4 4 4 
// 5 5 5 5 5 5 5 5 5 

int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
  
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <=2* (rows - i); j++) {
            printf(" ");
        }
        for (int k = 1; k < 2 * i; k++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}