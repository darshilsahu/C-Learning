// A program containing functions which counts the number of positive integers in an array.
#include <stdio.h>

void countarr(int arr[], int size);
void countarr(int arr[], int size)
{
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            c++;
        }
    }
    printf("Number of Positive Numbers are %d", c);
    return;
}

int main()
{
    int num;
    printf("Enter Number of Elements in Arrays: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Invalid");
        return 1;
    }
    int arr[num];
    int i = 0;
    while (i < num)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr[i]);
        i++;
    }
    countarr(arr, num);
    return 0;
}