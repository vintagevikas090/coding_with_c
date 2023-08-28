#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int guess, attempt=1;
    srand(time(0));
    int number =((rand()%100)+1);
    
    do{
        printf("Guess a number between 1 to 100: \n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Your number is High.\n");
            printf("%d attempts left\n", (7-attempt));
        }
        else if(guess<number){
            printf("Your number is Low.\n");
            printf("%d attempts left\n", (7-attempt));
        }
        else{
            printf("Bingo!! you have won!\n");
            printf("You gussed the number in %d attempts.", attempt);
            break;
        }
        attempt++;
        
    }while(attempt<=7);

    if(attempt==8){
        printf("Game Over!!!, try to be Mathematical.\n");
    }
    
    return 0;
}