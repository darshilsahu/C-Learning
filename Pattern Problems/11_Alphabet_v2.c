/*
____________________________
#To Print following alphabet Triangle
A
BA
CBA
DCBA
EDCBA

  ....till nth lines
 ____________________________
*/

#include <stdio.h>
void alphabet(int n);
void alphabet(int n)
{

    if (n == 1)
    {
        printf("A");
        return;
    }
    alphabet(n - 1);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%c",64+n-i);
    }
    
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (i == 0)
    //     {
    //         printf("%c", 64 + n);
    //     }
    //     printf("%c", 63 + n - i);
    // }
}
int main()
{
    int lines;
    printf("Enter Number of lines: ");
    scanf("%d", &lines);
    if (lines <= 0)
    {
        printf("Invalid");
    }
    else if (lines > 26)
    {
        printf("Invalid");
    }
    else
    {
        alphabet(lines);
    }

    return 0;
}