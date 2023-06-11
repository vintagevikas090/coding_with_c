#include <stdio.h>
#include <stdlib.h>

/* Write a C program to read a password until it is valid.
For wrong password print "Incorrect password" and for correct password print,
 "Correct password" and quit the program.   The correct password is 1234
*/

int main()
{
    int password, x;
    x= 10;

    while (x!=0)

   {
       printf("Enter password: ");
       scanf("%d", &password);

        if (password == 1234)
            {printf("Correct Password.\n");
                    x = 0;
            }
        else
            printf("Password is wrong.\n");
   }
    return 0;}
