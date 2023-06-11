#include<stdio.h>

// The greatest common divisor (GCD) of two or more numbers is the greatest common factor number that divides them, exactly.
//  It is also called the highest common factor (HCF).
//   For example, the greatest common factor of 15 and 10 is 5, since both the numbers can be divided by 5

int main(){

    int n1, n2, gcd, i;

    printf("Enter the two numbers: ");
    scanf("%d %d", n1, n2);

    for(i = 1; (i<=n1 && i<=n2); i++){
        if(n1%i == 0 && n2%i == 0){
            gcd = i;
        }
    }
    printf("GCD or HCF of the %d and %d is: %d", n1, n2, gcd);

    return 0;
}