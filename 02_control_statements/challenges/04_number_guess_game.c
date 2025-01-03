//challenge: a simple game where the user guesses a random number, using a do-while loop to keep the game running until the correct guess

#include <stdio.h>

int main() {

    int number, guess;

    //asking user for a number
    printf("Enter a number for the guessing game (1-100): ");
    scanf("%d", &number);

    //starting the guessing game
    do {
        printf("Guess the number: ");
        scanf("%d", &guess);

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number.\n");
        }
    } while (guess != number);

    return 0;
}