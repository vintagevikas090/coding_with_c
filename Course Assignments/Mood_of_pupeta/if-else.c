#include<stdio.h>
#include<stdlib.h>

//Write the program as asked. 
//Your program will prompt for the number of neighbors of 'Pupeta - the creature' and 
//then will print the present mood of him

int main()
{
    int n;
    printf("Enter the number of neighbour at present: ");
    scanf("%d", &n);

    if(n == 0){
        printf("Mood of pupeta\n");
        printf("Sad and will force you to listen to his story, will make you late.");
    }
    else if(n == 1){
        printf("Mood of pupeta\n");
        printf("He will ask you to deliver half of the pizza to his only neighbor, you may be late");
    }
    else if(n>=2&& n<=5){
        printf("Mood of pupeta\n");
        printf("Will have great mood and will be singing song. May crack joke as well.You will get good tips, definitely.");
    }
    else if(n == 6 || n == 8){
        printf("Mood of pupeta\n");
        printf("Too angry and furious, deliver the pizza and leave ASAP.");
    }
    else if(n ==7){
        printf("Mood of pupeta\n");
        printf("He will be making great drink for his neighbors and will invite you to taste. But will not give you tip.");
    }

    return 0;
}