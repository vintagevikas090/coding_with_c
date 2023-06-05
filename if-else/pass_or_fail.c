#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P,C,M,T, percentage;

    printf("Enter physics marks: ");
    scanf("%d", &P);

    printf("Enter maths marks: ");
    scanf("%d", &M);

    printf("Enter Chemistry marks: ");
    scanf("%d", &C);

    T = (P+C+M);
    percentage = (T/3);

    printf("Total Marks obtained are %d\n", T);
    printf("Student's Percentage is %d\n", percentage);

    if (percentage>=80)
        printf("Candidate has passed with 1st Division");
    else if(percentage>=60 && percentage<80)
        printf("Candidate has passed with 2nd Division");
    else if(percentage>=40 && percentage<60)
        printf("Candidate has passed with 3rd Division");
    else
        printf("Candidate is FAIL.");


    return 0;
}
