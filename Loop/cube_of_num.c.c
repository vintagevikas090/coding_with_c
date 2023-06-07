#include <stdio.h>
#include <stdlib.h>

// Write a program in C to display the cube of the number up to an integer.

int main()
{
    int i, n, cube;
    i = 1;
    printf("Enter n: ");
    scanf("%d", &n);
  /*  while (i<=n)
        {cube = (i*i*i);

        printf("Number is: %d then cube is: %d\n", i, cube);
        i++;}
    */

    for (i=1; i<=n; i++)
    {   cube = i*i*i;
        printf("Number is: %d then cube is: %d\n", i, cube);
    }
    return 0;
}
