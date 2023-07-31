#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int quit, guess, score;
    int correct_ans = 0;
    int incorrect_ans = 0;
    int num1 = ((rand()%6)+1);
    int num2 = ((rand()%6)+1);
    int sum = num1 + num2;
    printf("Computer rolled two dices...Guess the sum.\n");
    printf("Or\n");
    
    
    while(1){
        printf("Enter 0 or negetive value to terminate the program.\n");
        scanf("%d", &quit);
        if(quit>0){
            printf("Enter your guess: \n");
            scanf("%d", &guess);
            if(guess == sum){
                printf("Bravo! You gussed it right.\t");
                printf("+10 Marks to you.\n");
                correct_ans++;
            }
            else{
                printf("Oh! Bad attempt.\t");
                printf("-5 Marks\n");
                printf("The sum was %d\n", sum);
                incorrect_ans++;
            }
            printf("Total correct = %d\n", correct_ans);
            printf("Total incorrect = %d\n", incorrect_ans);
            score =( (correct_ans*10) + (incorrect_ans*(-5)) );
            printf("SCORE: %d\n", score);
        }
        else{
            printf("FINAL SCORES.....\n");
            printf("Total correct = %d\n", correct_ans);
            printf("Total incorrect = %d\n", incorrect_ans);
            score =( (correct_ans*10) + (incorrect_ans*(-5)) );
            printf("SCORE: %d\n", score);
            printf("Thank you for playing.");
            break;
        }
    }


    return 0;
}