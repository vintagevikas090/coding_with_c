// Find sum of all prime numbers upto n.
// In this coding exercise 
// you will write a function that will calculate the sum of all the prime numbers upto n, 
// n will be supplied as parameter to the function. 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int Isprime(int num){
    for(int i= 2; i<=sqrt(num); i++){
        if(num%i == 0){
            return 0;//not prime 
        }
    }
    return 1;
}

int sum_prime(int n){
    int sum = 0;
    for(int j = 2; j<=n; j++){
        if(Isprime(j)){
            sum+=j;
        }
    }
    return sum;
}

int main()
{
    int number;
    printf("Enter the number upto which you want the sum: ");
    scanf("%d", &number);
    printf("%d", sum_prime(number));
    
    return 0;
}