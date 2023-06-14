#include<stdio.h>
#include<math.h>

int main(){

    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);
 
//   for(i = 2; i<sqrt(n) ; i++)
    for(i = 2; i<n ; i++)
    {
        if(n%i == 0){
            printf("Given number is not prime\n");
            break;
        }
        else
            printf("Yes, given number is prime. ");
            break;
    }

    return 0;
}