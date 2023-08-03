#include <stdio.h>
#include<stdlib.h>
#include<math.h>

//program to find sum of the prime numbers in range given by user

int primeno(int n);

int main(){
    int n, a, b, sum;
    sum = 0;
    printf("Enter the range of prime numbers to be added: ");
    scanf("%d %d", &a, &b);
    for(n = a; n<=b; n++){
        if(primeno(n)){
             printf("%d is a prime number.\n", n);
             sum = (sum+n);
        }   
    }
    printf("Total sum is = %d", sum);   
    
    return 0;
}
int primeno(int n){ 
    for (int i = 2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}
