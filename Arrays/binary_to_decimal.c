#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
     int n;
     printf("Enter the total number of digits in binary number: ");
     scanf("%d", &n);
     int p[n];
     int x = n-1;
     int decimal_num = 0;
     printf("Enter the binary number: ");
     for(int i=0; i<n; i++){
        scanf("%d", &p[i]);
     }
    for(int i=0; i<n; i++){
        decimal_num+=(p[i]*pow(2, x));
        x--;
     }
     printf("Corresponding Decimal number is %d", decimal_num);

    return 0;
}