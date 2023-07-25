#include<stdlib.h>
#include <stdio.h>

int n;
int main ()
{
      extern int n;
      printf ("Enter the number of element in array: \n");
      scanf ("%d", &n);
      int *ptr;
      ptr = (int*)calloc(n, sizeof(int));
      if (ptr == NULL){
        printf("Memory not allocated.\n");
      }
      else{
        printf("Memory has been allocated.\n\n");
        printf ("Enter the elements of array: \n");
      for (int i = 0; i < n; i++)
        {
          scanf ("%d", &ptr[i]);
        }
      }
      for (int j = 1; j < n; j++)
        {
          if (ptr[j] > ptr[0])
    	{
    	  ptr[0] = ptr[j];
    	}
          else
    	ptr[0] = ptr[0];
        }
      printf ("Max of the numbers is %d", ptr[0]);
    
      return 0;
}
