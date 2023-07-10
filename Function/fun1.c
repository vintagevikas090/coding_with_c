// <!-- In this coding exercise you will write a simple function as instructed below. 

// Write a function named my_function that will receive 3 parameters, 
// all positive(unsigned) integers, the return type of the function is also positive (unsigned) integer.
//  First you will declare  the prototype at the beginning and
//  then you will write the implementation of the function as well.

// You can name the parameters as you like, I would like to refer them as first, second and third. -->
// Task: The function my_function will find  
// and return the highest number that is divisible by the third parameter in the 
// range > first and <=second. 
//  You can safely assume that, first < second always. If no such value found function should return 0.


#include<stdio.h>

unsigned int my_function(unsigned int a, unsigned int b, unsigned int c){
        int Highest;
        for(int i = a; i<=b; i++){
            if(i%c == 0){
                if (i>=Highest){
                    Highest = i;
                }
            }
        }
        return Highest;
        if(c>a && c>b){
            return 0;
        }
}


int main()
{
    
    printf("%u", my_function(10,50,67));

    return 0;
}