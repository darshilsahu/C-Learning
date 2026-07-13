#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int randnum, num, guess = 0;
    printf("WELCOME TO NUMBER GUESSING GAME\n");
    printf("THE NUMBER IS BETWEEN 1 TO 100\n");
    printf("YOU HAVE 10 TRIES\n");
    srand(time(NULL));
    randnum = (rand() % 100) + 1;
    for (int i = 1; i < 11; i++)
    {
        printf("Attempt %d of 10\n",i);
        printf("Enter the Number: ");
        guess++;
        scanf("%d", &num);
        if (num == randnum)
        {
            printf("Congratulations! YOU WON\n");
            printf("Number of guesses: %d \n", guess);
            return 0;
        }
        else if (num > randnum)
        {
            printf("THE NUMBER IS LOWER\n");
        }
        else if (num < randnum)
        {
            printf("THE NUMBER IS HIGHER\n");
        }
    }
    printf("OUT OF TRIES\n");
    printf("GAME OVER\n");
    printf("THE CORRECT NUMBER IS: %d ",randnum);
    return 0;
}
