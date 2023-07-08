#include<stdio.h>

//W.A.P to find average of 3 value..


float avg(int a, int b, int c){
    float average;
    int sum = a+b+c;
    average = (float)sum/3;
    return average;
}

int main(){

    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    float average = avg(a, b, c);
    printf("Average of the 3 given numbers is %.2f ", average);

    return 0;
}