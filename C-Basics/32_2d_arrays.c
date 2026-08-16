#include <stdio.h>

int main()
{
    int arrays[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the Values of Arrays: ");
            scanf("%d", &arrays[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arrays[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}