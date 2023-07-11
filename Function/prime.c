#include <stdio.h>
#include<stdlib.h>
#include<math.h>


//program to check prime number


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





// void primeno(int n);

// int main(){

//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     primeno(n);

//     return 0;
// }

// void primeno(int n){
//     int c = 2;      //take c as no of diviosors of n
//     for (int i = 2; i<n ; i++)
//     {
//         if (n%i == 0)
//             c++;
//     }
//     if(c==2)
//         printf("Number is prime.\n");
//     else
//         printf("Number is not prime.\n");

// }



