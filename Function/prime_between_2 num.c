#include<stdio.h>
#include<stdlib.h>

//program to check a number is prime or not in range given by user


int primeno(int n);

int main(){
    int n;
    printf("Enter A number: ");
    scanf("%d", &n);
    if(primeno(n))
        printf("%d is a prime number.\n", n);
    else 
        printf("Not a prime number.\n");

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

void isPrime(int n){
    for(int k= 2; k<n; k++){
        if(n%k == 0){
            break;
        }
        else{
            printf("%d, ", n);
            break;
        }
    }
}

int main()
{
    int i, a, b;
    printf("Enter the range in which you all primes: ");
    scanf("%d %d", &a, &b);
    for(i = a; i<=b; i++){
        isPrime(i);
    }
    
    return 0;
}