#include<stdio.h>
#include<math.h>

//program to find the roots of any quadratic equation

int main(){

    int a, b, c;
    float D, root1, root2, realpart, imgpart;

    printf("Enter the coefficents of the quardratic equation(of x2, x, 1): ");
    scanf("%d %d %d", &a, &b, &c);

    D = (b*b - 4*a*c);

    if(D>0){
        root1 = ((-b + sqrt(D))/2*a);
        root2 = ((-b - sqrt(D))/2*a);
        printf("Both roots are real and distint.\n");
        printf("Root1 is %.2f and Root2 is %.2f", root1, root2);
    }
    else if(D == 0){
        root1 = root2 = ((float)(-b)/2*a);
        printf("Both roots are real and equal.\n");
        printf("Root1 and Root2 is %.2f , %.2f", root1, root2);
    }
    else{
        realpart = (-b/2*a);
        imgpart = (sqrt(-D)/2*a);
        printf("Roots are Complex.\n");
        printf("Root1 is %.2f+ %.2fi and Root2 is %.2f+%.2fi", realpart, imgpart, realpart, imgpart);
    }



    return 0;
}