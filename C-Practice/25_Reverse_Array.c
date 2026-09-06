// To Make a Function that Reverse the Arrays Passed to it
#include <stdio.h>

void reversearray(int arr[], int size);
void reversearray(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int num;
    printf("Enter Number of Arrays to Store: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("invalid");
        return 1;
    }

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    reversearray(arr, num);

    return 0;
}