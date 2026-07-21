#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int player;
    // snake->0
    // water->1
    // gun->2

    printf("=============================================\n");
    printf("              SNAKE,WATER AND GUN            \n");
    printf("=============================================\n");
    printf("Use Snake->0//Use Water->1//Use Gun->2\n");
    do
    {
        int computer = rand() % 3;

        printf("Enter your choice: \n");
        if (scanf("%d", &player) != 1)
        {
            printf("Invalid choice!\n");
            while (getchar() != '\n')
                ;
            continue;
        }
        if (player < 0 || player > 2)
        {
            printf("Invalid choice!\n");
            continue;
        }
        if (player == 0)
        {
            printf("Player chose: Snake\n");
        }
        else if (player == 1)
        {
            printf("Player chose: Water\n");
        }
        else if (player == 2)
        {
            printf("Player chose: Gun\n");
        }
        if (computer == 0)
        {
            printf("Computer chose: Snake\n");
        }
        else if (computer == 1)
        {
            printf("Computer chose: Water\n");
        }
        else if (computer == 2)
        {
            printf("Computer chose: Gun\n");
        }
        if (computer == 0 && player == 1)
        {
            printf("Computer wins the match.\n");

            break;
        }
        else if (computer == 1 && player == 0)
        {
            printf("Player wins the match.\n");

            break;
        }
        else if (computer == 2 && player == 0)
        {
            printf("Computer wins the match.\n");

            break;
        }
        else if (computer == 0 && player == 2)
        {
            printf("Player wins the match.\n");
            break;
        }
        else if (computer == 1 && player == 2)
        {
            printf("Computer wins the match.\n");
            break;
        }
        else if (computer == 2 && player == 1)
        {
            printf("Player wins the match.\n");
            break;
        }
        else if (computer == 0 && player == 0)
        {
            printf("Draw! Both chose Snake.\n");
        }
        else if (computer == 1 && player == 1)
        {
            printf("Draw! Both chose Water.\n");
        }
        else if (computer == 2 && player == 2)
        {
            printf("Draw! Both chose Gun.\n");
        }

    } while (1);

    return 0;
}