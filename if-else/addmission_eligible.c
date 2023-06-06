
#include <stdio.h>
#include <stdlib.h>

/*
Write a C program to determine eligibility for admission

 M = maths
 p =physics
 c= chemisrty
 t= total
*/

int main()
{
    int M, P, C, T, PM;
    printf("Enter Maths marks: \n");
    scanf("%d", &M);
    printf("Enter Physics marks: \n");
    scanf("%d", &P);
    printf("Enter Chemistry marks: \n");
    scanf("%d", &C);

    PM =(M+P);
    T =(M+P+C);

    if (M>=65 && P>=55 && C>=50 && (T>=190|| PM>=140))
        printf("The candidate is eligible for admission.");
    else
        printf("The candidate is not eligible for admission.");

    return 0;
}
