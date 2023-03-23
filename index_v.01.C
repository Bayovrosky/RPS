#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main() {

    int userChoice, computerChoice;

    srand(time(NULL));

    printf("Let's play rock paper scissors!\n");

    printf("Enter your choice (1 for rock, 2 for paper, 3 for scissors): ");

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

            printf("rock.\n");

            break;

        case 2:

            printf("paper.\n");

            break;

        case 3:

            printf("scissors.\n");

            break;

    }

    if (userChoice == computerChoice) {

        printf("It's a tie!\n");

    } else if ((userChoice == 1 && computerChoice == 3) ||

               (userChoice == 2 && computerChoice == 1) ||

               (userChoice == 3 && computerChoice == 2)) {

        printf("You win!\n");

    } else {

        printf("The computer wins!\n");

    }

    return 0;

}

