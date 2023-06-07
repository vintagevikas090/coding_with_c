#include<stdio.h>
#include<stdlib.h>

//program to find factors of any given number

int main()
{
    int num, i, no_of_factor;
    no_of_factor = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(i = 1; i<=num; i++){
        if(num % i == 0){ 
            printf("%d is a factor of %d\n", i, num);
            no_of_factor++;
        }
    } 
    printf("Total number of factors for %d is %d", num, no_of_factor);


    
    return 0;
}