#include<stdio.h>
#include<stdlib.h>

int n;

int main()
{
   extern int n;
   int *p;
   printf("Enter the total number of digits in binary number: ");
   scanf("%d", &n);
   p = (int *)calloc(n, sizeof(int));
   printf("Enter the binary number: ");
   for(int i=0; i<n; i++){
        scanf("%d", &p[i]);
   }
   

    return 0;
}