#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Enter a Number: ");
   scanf("%d", &n);

   if (n>=0)
   {
       if (n%2==0)
            printf("Given number is positive even\n");
       else
            printf("Given number is positive odd\n");
   }

    else
    {
        if (n%2 ==0)
            printf("Given number is negative even\n");
        else
            printf("Given number is negative odd\n");
    }
    return 0;
}
