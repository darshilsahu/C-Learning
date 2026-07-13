#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    printf("Enter How Many Number You Want to Generate: ");
    scanf("%d", &number);
    srand(time(NULL));
    for (int i = 0; i <= number; i++)
    {
        printf("%d\n", (rand() % 100) + 1);
    }

    return 0;
}