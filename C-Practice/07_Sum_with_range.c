// To Sum numbers of given numbers by user (using While loop)

#include <stdio.h>

int main()
{
    int start, end, i, sum = 0;
    printf("Enter Starting number :");
    scanf("%d", &start);
    printf("Enter Ending number :");
    scanf("%d", &end);
    if (start < end)
    {
        i = start;
        while (i <= end)
        {
            sum = sum + i;
            i++;
        }
        printf("The Sum of integers from %d to %d is %d", start, end, sum);
    }
    else
    {
        i = end;
        while (i <= start)
        {
            sum = sum + i;
            i++;
        }
        printf("The Sum of integers from %d to %d is %d", start, end, sum);
    }

    return 0;
}