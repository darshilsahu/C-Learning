/*
TO PRINT FOLLOWING PATTERN OF n LINES
*
***
*****
*/
#include <stdio.h>
void starpattern(int n);
void starpattern(int n)
{

    if (n == 1)
    {
        printf("*");

        return;
    }
    starpattern(n - 2);
    printf("\n");
    

    for (int i = 0; i < n; i++)
    {

        printf("*");
        
    }
}

int main()
{
    int lines;

    printf("Enter Number of lines of Pattern: ");
    scanf("%d", &lines);
    //printf("*");
    if (lines <= 0)
    {
        printf("Lines Cannot be zero or Negative");
    }
    else
    {
        starpattern(2 * lines - 1);
        // nth line contains (2*lines - 1) stars
    }
    return 0;
}