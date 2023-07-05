#include<stdlib.h>
#include <stdio.h>

//program to find largest number in array given by user

int main ()
{
      int n;
      printf ("Enter the number of element in array: \n");
      scanf ("%d", &n);
      int p[n];
      
      printf ("Enter the elements of array: \n");
      for (int i = 0; i < n; i++){
        {
          scanf ("%d", &p[i]);
        }
      }
      for (int j = 1; j < n; j++)
        {
          if (p[j] > p[0])
          {
            p[0] = p[j];
          }
        }
      printf ("Max of the numbers is %d", p[0]);
    
      return 0;
}
