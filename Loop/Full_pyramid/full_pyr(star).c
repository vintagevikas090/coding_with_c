#include <stdio.h>
  
//        * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * *

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
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}