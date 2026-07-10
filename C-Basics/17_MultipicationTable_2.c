#include <stdio.h>
int main()
{
    int i, start, number, end;
    printf("Enter Number :");
    scanf("%d", &number);
    printf("Enter Starting Table :");
    scanf("%d", &start);
    printf("Enter Ending Table :");
    scanf("%d", &end);
    i = start;
    while (i <= end)
    {
        printf("%d X %d = %d\n", number, i, i * number);
        i++;
    }
    return 0;
}