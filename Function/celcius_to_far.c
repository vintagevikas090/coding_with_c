#include<stdio.h>

//write a program to convert celcius into farhenheit..

float cel_to_far(float a){
    float farhenhiet =( (a*9/5) + 32 );
    return farhenhiet;
}

int main(){

    float celcius, farhenheit;
    printf("Enter the value of celcius: ");
    scanf("%f", &celcius);
    farhenheit = cel_to_far(celcius);
    printf("Corresponding farhenheit value is %.2f\n", farhenheit);

    return 0;
}