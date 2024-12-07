#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to ask Yes/No question and return the result
void ask_question(int question_number) {
    if (question_number == 1) {
        printf("Question: Do you like programming?\n");
        printf("Answer (y/n): ");
    }
    else if (question_number == 2) {
        printf("Question: Do you enjoy learning new languages?\n");
        printf("Answer (y/n): ");
    }
    else if (question_number == 3) {
        printf("Question: Are you a morning person?\n");
        printf("Answer (y/n): ");
    }
    else if (question_number == 4) {
        printf("Question: Do you like video games?\n");
        printf("Answer (y/n): ");
    }
    else if (question_number == 5) {
        printf("Question: Do you enjoy outdoor activities?\n");
        printf("Answer (y/n): ");
    }
}

int main() {
    char play_again = 'y';
    char user_answer;
    int random_question_number;

    // Initialize random number generator
    srand(time(0));

    printf("Welcome to the Wheel of Fortune Yes/No Game!\n");

    // Game loop
    while (play_again == 'y' || play_again == 'Y') {
        // Generate a random question number between 1 and 5
        random_question_number = rand() % 5 + 1;

        // Ask a random Yes/No question
        ask_question(random_question_number);

        // Get user input (yes/no answer)
        scanf(" %c", &user_answer);  // Add space before %c to consume any previous newline character

        // Validate the answer and print result
        if (user_answer == 'y' || user_answer == 'Y') {
            printf("You answered Yes!\n");
        } else if (user_answer == 'n' || user_answer == 'N') {
            printf("You answered No!\n");
        } else {
            printf("Invalid input! Please answer with 'y' or 'n'.\n");
        }

        // Ask if the user wants to play again
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &play_again);
    }

    printf("Thanks for playing the Wheel of Fortune Yes/No Game!\n");

    return 0;
}
