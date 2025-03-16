#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number within a range (e.g., 0 to 99)
    int random_number = rand() % 100;  // 0 to 99
    int number_of_guesses = 0;
    int guessed_number ;
    printf("\n");
    printf("\n");
    printf("\033[36m TO GUESS THE NUMBER - RANGE : 0 TO 99\n");
    do{
        printf("\n");
        printf("\n");
        printf("\033[1;31;47m  GUESS THE NUMBER :\033[0m");
       // printf("GUESS THE NUMBER : ");
        scanf("%d", &guessed_number);
        if (guessed_number > random_number){
            //printf("Lower Number Please ! \n");
            printf("\033[33m Lower Number Please ! \n");
        }
        else if(guessed_number < random_number){
            //printf("Higher Number Please ! \n");
            printf("\033[34m Higher Number Please !\n");
        }
        else {
           // printf("\n \n CONGRATULATIONS !! YOU WON ! \n \n ");
            printf("\033[42m\n CONGRATULATIONS !! YOU WON !\033[0m\n");
        }
        number_of_guesses++ ;

    } while(guessed_number != random_number);

    //printf(" You guessed the number in %d chances !\n", number_of_guesses );
    printf("\033[4;34;46m You guessed the number in %d chances !\033[0m\n \n \n ", number_of_guesses);
    return 0;
}