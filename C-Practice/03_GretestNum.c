// Find Max and Min of Four No using If else only
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Enter Your First Number: ");
    scanf("%d", &num1);

    printf("Enter Your Second Number: ");
    scanf("%d", &num2);

    printf("Enter Your Third Number: ");
    scanf("%d", &num3);

    printf("Enter Your Fourth Number: ");
    scanf("%d", &num4);
    if (num1 >= num2 && num1 >= num3 && num1 >= num4)
    {
        printf("The Max No. is %d\n", num1);
        if (num4 <= num3 && num4 <= num2)
        {
            printf("The Min No. is %d\n", num4);
        }
        else if (num3 <= num4 && num3 <= num2)
        {
            printf("The Min No. is %d\n", num3);
        }
        else if (num2 <= num3 && num2 <= num4)
        {
            printf("The Min No. is %d\n", num2);
        }
    }
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4)
    {
        printf("The Max No. is %d\n", num2);
        if (num4 <= num3 && num4 <= num1)
        {
            printf("The Min No. is %d\n", num4);
        }
        else if (num3 <= num4 && num3 <= num1)
        {
            printf("The Min No. is %d\n", num3);
        }
        else if (num1 <= num3 && num1 <= num4)
        {
            printf("The Min No. is %d\n", num1);
        }
    }
    else if (num3 >= num2 && num3 >= num1 && num3 >= num4)
    {
        printf("The Max No. is %d\n", num3);
        if (num4 <= num1 && num4 <= num2)
        {
            printf("The Min No. is %d\n", num4);
        }
        else if (num1 <= num4 && num1 <= num2)
        {
            printf("The Min No. is %d\n", num1);
        }
        else if (num2 <= num1 && num2 <= num4)
        {
            printf("The Min No. is %d\n", num2);
        }
    }
    else if (num4 >= num2 && num4 >= num3 && num4 >= num1)
    {
        printf("The Max No. is %d\n", num4);
        if (num1 <= num3 && num1 <= num2)
        {
            printf("The Min No. is %d\n", num1);
        }
        else if (num3 <= num1 && num3 <= num2)
        {
            printf("The Min No. is %d\n", num3);
        }
        else if (num2 <= num3 && num2 <= num1)
        {
            printf("The Min No. is %d\n", num2);
        }
    }

    return 0;
}