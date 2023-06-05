#include<stdio.h>

int main(){

    float salary, tax;
    printf("Enter your salary: ");
    scanf("%f", &salary);

    if(salary>=0 && salary<250000){
        tax = 0;
        printf("You don't need to pay any tax.");
    }
    else if(salary>=250000 && salary<500000){
        tax = salary*0.05;
        printf("Tax percentage for you salary range is 5.\n");
        printf("You need to pay %.2f as tax\n", tax);
    }
    else if(salary>=500000 && salary<1000000){
        tax = salary*0.10;
        printf("Tax percentage for you salary range is 10.\n");
        printf("You need to pay %.2f as tax\n", tax);
    }
    else if(salary>=1000000){
        tax = salary*0.20;
        printf("Tax percentage for you salary range is 20.\n");
        printf("You need to pay %.2f as tax\n", tax);
    }

    return 0;
}