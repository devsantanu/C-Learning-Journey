#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int random_num = rand() % 100 + 1;
    int attempts = 0;
    int guessedNumber;
    do
    {

        printf("Guess a number between 1 to 100: ");
        if (scanf("%d", &guessedNumber) != 1)
        {
            printf("Invalid input!\n");
            while (getchar() != '\n')
                ;
            continue;
        }
        if (guessedNumber < 1 || guessedNumber > 100)
        {
            printf("Invalid input!\n");
            continue;
        }

        if (guessedNumber > random_num)
        {
            printf("Lower number please!\n");
        }
        else if (guessedNumber < random_num)
        {
            printf("Higher number please!\n");
        }

        attempts++;
        printf(" attempts: %d\n", attempts);
    } while (guessedNumber != random_num);
    printf("--------------------------------------------\n");
    printf("Congratulations!  \n");
    printf("You guessed the number %d in  %d attempts \n", random_num, attempts);
    if (attempts <= 5)
    {
        printf("Excellent! ");
    }
    else if (attempts <= 10)
    {
        printf("Good job! ");
    }

    else
    {
        printf("Keep practicing!");
    }
    printf("Thank you for playing this game!");
    return 0;
}