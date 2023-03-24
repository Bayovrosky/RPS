#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main() {

    int userChoice, computerChoice;

    char playAgain;

    int userWins = 0;

    int computerWins = 0;

    int numRounds;

    srand(time(NULL));

    

    printf("Welcome to the rock-paper-scissors game, created by Bayovrosky!\n");

    do {

        printf("\n\nEnter the number of rounds you want to play: ");

        scanf("%d", &numRounds);

        for (int i = 0; i < numRounds; i++) {

            printf("\nEnter your choice (1 for rock, 2 for paper, 3 for scissors): ");

            scanf("%d", &userChoice);

            if (userChoice < 1 || userChoice > 3) {

                printf("Invalid choice. Please enter a number between 1 and 3.\n");

                return 1;

            }

            computerChoice = rand() % 3 + 1;

            printf("You chose ");

            switch (userChoice) {

                case 1:

                    printf("rock.\n");

                    break;

                case 2:

                    printf("paper.\n");

                    break;

                case 3:

                    printf("scissors.\n");

                    break;

            }

            printf("The computer chose ");

            switch (computerChoice) {

                case 1:

                    printf("rock. ");

                    if (userChoice == 1) {

                        printf("We both chose the same thing, how boring.\n");

                    } else if (userChoice == 2) {

                        printf("I see you like paper.\n");

                    } else {

                        printf("Looks like I'm the winner this time!\n");

                        computerWins++;

                    }

                    break;

                case 2:

                    printf("paper. ");

                    if (userChoice == 1) {

                        printf("Ha, you thought rock could beat me?\n");

                        computerWins++;

                    } else if (userChoice == 2) {

                        printf("We're evenly matched, huh?\n");

                    } else {

                        printf("Nice try, but scissors can't cut paper!\n");

                        userWins++;

                    }

                    break;

                case 3:

                    printf("scissors. ");

                    if (userChoice == 1) {

                        printf("You may have won this round, but I'll be back.\n");

                        userWins++;

                    } else if (userChoice == 2) {

                        printf("I'm sorry, but your paper is no match for my scissors.\n");

                        computerWins++;

                    } else {

                        printf("It's a tie!\n");

                    }

                    break;

            }

        }

        printf("\nFinal score: User %d - %d Computer\n", userWins, computerWins);

        printf("\nWould you like to play again? (y/n): ");

        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nThanks for playing! Goodbye.\n");

    return 0;

}

