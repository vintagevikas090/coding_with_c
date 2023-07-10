#include<stdio.h>

float force_of_gravity(int m){
    float f = (float)m*9.8;
    return f;
}

int main(){

    int mass;
    float force;
    printf("Enter the mass of the body: ");
    scanf("%d", &mass);
    force = force_of_gravity(mass);
    printf("Force of gravity on the given mass is %.3f", force);

    return 0;
}