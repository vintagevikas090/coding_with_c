#include<stdio.h>
#include<stdlib.h>

int gcd(int n1, int n2, int i){
    int gcd_no; 
    if(n1%i == 0 && n2%i == 0){
        gcd_no = i;
        if(i>n1 || i>n2){
            return gcd_no;
        }
        else
            gcd_no = gcd(n1, n2, i+1);
    }
}

int main()
{
    int a, b;
    printf("Enter the two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is %d", a, b,  gcd(a, b, 1));
    
    return 0;
}