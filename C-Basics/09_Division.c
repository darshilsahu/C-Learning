// Print Quotient and Remainder of given number when divided by 87
#include <stdio.h>

int main()
{
    int number;
    printf("Enter Your Number :");
    scanf("%d", &number);
    // Dividend=Divisor*Quotient+Remainder
    int Remainder = number %87;
    int Quotient = (number - Remainder) /87;
    printf("Quotient =%d\n", Quotient);
    printf("Remainder =%d\n", Remainder);

    return 0;
}