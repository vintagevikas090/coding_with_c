#include<stdio.h>

//calculator which can perform + , - , * , / 


int main(){

    float a, b;
    char operation;
    printf("Type operation you want to perform(+ , - , * , /): \n");
    scanf("%c", &operation);
    printf("Enter the numbers: \n");
    scanf("%f %f", &a, &b);

    switch(operation){

        case '+':
            printf("Sum of %.1f and %.1f is = %.1f", a, b, (a+b));
            break;
        case '-':
            printf("Substraction of %.1f and %.1f is = %.1f", a, b, (a-b));
            break;
        case '*':
            printf("Multiplication of %.1f and %.1f is = %.1f", a, b, (a*b));
            break;
        case '/':
            printf("Division of %.1f and %.1f is = %.1f", a, b, (a/b));
            break;
        default:
            printf("Error! operator chosen is not right.\nChoose form (+ , - , * , /)");
            break;

    }


    return 0;
}