#include <stdio.h>
int sum(int, int);
int sum(int x, int y)
{
    return x + y;
}
int product(int, int);
int product(int x, int y)
{
    return x * y;
}
int subtract(int, int);
int subtract(int x, int y)
{
    return x - y;
}
float divide(float, float);
float divide(float x, float y)
{
    return x / y;
}

int main()
{
    int num1, num2;
    printf("Enter Your First Number: ");
    scanf("%d", &num1);
    char operator;
    printf("Enter Operation: ");
    scanf(" %c", &operator);
    printf("Enter Your Second Number: ");
    scanf("%d", &num2);
    if (operator == '+')
    {
        printf(" %d + %d = %d", num1, num2, sum(num1, num2));
    }
    else if (operator == '*' || operator == 'X')
    {
        printf(" %d X %d = %d", num1, num2, product(num1, num2));
    }
    else if (operator == '-')
    {
        printf(" %d - %d = %d", num1, num2, subtract(num1, num2));
    }
    else if (operator == '/')
    {
        if (num2 == 0)
        {
            printf("Division with Zero is not Possible");
        }
        else
        {
            printf(" %d / %d = %.3f", num1, num2, divide(num1, num2));
        }
    }
    else
    {
        printf("Invalid Operator");
    }
    return 0;
}