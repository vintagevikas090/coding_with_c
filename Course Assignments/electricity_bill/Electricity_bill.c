#include<stdio.h>
#include<stdlib.h>


int main()
{
    int units_consumed;
    float price;
    printf("**Welcome to ABC Power supply company**\n");
    printf("Enter the total units consumed: ");
    scanf("%d", &units_consumed);

    if(units_consumed>=0 && units_consumed<=100){
        price = (units_consumed*(0.2));
    }
    else if(units_consumed>100 && units_consumed<=250){
        price = (100 * 0.2) + ( (units_consumed-100) *(0.5));
    }
    else if(units_consumed>250 && units_consumed<=500){
        price =( (100 * 0.2) + ( (150) *(0.5)) +  (units_consumed-250) *(0.75));
    }
    else if(units_consumed>500){
        price =( (100 * 0.2) + ( (150) *(0.5)) +  (250) *(0.75)) + ((units_consumed-500)*1);
    }
    else if(units_consumed<0){
        printf("Units consumed can not be negetive.\n");
    }
    if(units_consumed>=0){
    printf("Your Electricity bill for %d units is $%.2f\n", units_consumed, price);
    printf("Thank You");
    }

    return 0;
}