// Mini Calculator
/*Input number-->Operator--->second number
with operators +, -, *, /, %
print invalid for Invalid Operator*/
#include <stdio.h>

int main()
{
    // Number Input
    int num1, num2;
    printf("Enter First Number:");
    scanf("%d", &num1);

    // Enter Operator
    char operator;
    printf("Enter Operator (+ - * / %%): ");
    scanf(" %c", &operator);

    // Enter Second Number
    printf("Enter Second Number: ");
    scanf("%d", &num2);

    if (operator == '+')
    {
        printf("%d %c %d = %d", num1, operator, num2, num1 + num2);
    }
    else if (operator == '-')
    {
        printf("%d %c %d = %d", num1, operator, num2, num1 - num2);
    }
    else if (operator == '*' || operator == 'X')
    {
        printf("%d %c %d = %d", num1, operator, num2, num1 * num2);
    }
    else if(num2==0){
        printf("Division with Zero Not Possible");
    }
    else if (operator == '/')
    {
        printf("%d %c %d = %d", num1, operator, num2, num1 / num2);
    }
    else if (operator == '%')
    {
        printf("%d %c %d = %d", num1, operator, num2, num1 % num2);
    }
    else
    {
        printf("Invalid Operator");
    }

    return 0;
}