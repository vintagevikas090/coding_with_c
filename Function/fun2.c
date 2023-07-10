// // In this coding exercise you will complete the code of a function 
// that will test if a supplied character is digit character or not,
//  the character will be received by the function as parameter and 
//  if the character is a digit character (that is if that is >= '0' and <='9') 
//  then the function should return 1 to the caller (tester) otherwise it should return 0.

int is_digit_char(char ch){
    if((ch>='0' && ch<='9')){
        return 1;
    }
    else   
        return 0;
}

#include<stdio.h>
#include<stdlib.h>


int main()
{
    printf("%d", is_digit_char('0'));
    
    return 0;
}