// A Program that print Blue on entering EVEN No. and Red on Odd
#include <stdio.h>
int main()
{
    int Number;
    printf("Enter your Number: ");
    scanf("%d", &Number);
    if (Number % 2 == 0)
    {
        printf("BLUE");
    }
    else
    {
        printf("RED");
    }

    return 0;
}