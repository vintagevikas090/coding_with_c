// Develop a function to find the area of a rectangle.

// In this coding exercise you will write a function from
//  the scratch that will receive 2 parameters, 
//  the height and breadth of a rectangle (both as float) 
//  and then the function will calculate and return the area of the rectangle.
//   Please note the name of the function must be rectangle_area

float rectangle_area(float height, float breadth){
    return height*breadth;
}

#include<stdio.h>
#include<stdlib.h>


int main()
{
    float a, b;
    printf("Enter the height and breadth respectively: \n");
    scanf("%f %f", &a, &b);
    printf("%.2f", rectangle_area(a, b));
    
    return 0;
}