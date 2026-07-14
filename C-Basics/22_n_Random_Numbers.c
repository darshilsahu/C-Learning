#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number,minrange,maxrange;
    printf("Enter Min Range: ");
    scanf("%d",&minrange);
    printf("Enter Max Range: ");
    scanf("%d",&maxrange);

    printf("Enter How Many Number You Want to Generate: ");
    scanf("%d", &number);
    srand(time(NULL));
    for (int i = 0; i <= number; i++)
    {
        printf("%d\n",rand()%(maxrange-minrange+1)+minrange);
    }

    return 0;
}