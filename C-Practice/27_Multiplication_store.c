#include <stdio.h>
int main()
{
    int num1;
    printf("Enter How many Table You want to Store: ");
    scanf("%d", &num1);
    int arr[num1][10];
    for (int i = 0; i < num1; i++)
    {
        printf("Enter Table Number to Store: ");
        scanf("%d", &arr[i][0]);
    }

    for (int j = 1; j < 10; j++)
    {
        for (int i = 0; i < num1; i++)
        {
            arr[i][j] = arr[i][0] * (j+1);
        }
    }
    
    for (int j = 0; j < 10; j++)
    {
        for (int i = 0; i < num1; i++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}