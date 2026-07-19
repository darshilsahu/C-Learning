/*TO PRINT FOLLOWING PATTERN
_____________________
***** from nth line n stars to 1 star
****
***
**
*
_______________________`
*/
#include <stdio.h>
void starpattern(int n);
void starpattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");

    if (n == 1)
    {
        // printf("*");
        return;
    }
    starpattern(n - 1);
}

int main()
{
    int lines;
    printf("Enter Number of lines for pattern: ");
    scanf("%d", &lines);
    if (lines <= 0)
    {
        printf("LINES CANNOT BE ZERO OR NEGATIVE");
    }
    else
    {
        starpattern(lines);
    }
    return 0;
}