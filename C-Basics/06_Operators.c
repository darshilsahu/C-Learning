#include <stdio.h>
int main()
{
    // TO ADD
    int a = 7, b = 8;
    printf("We are doing different operations on %d and %d\n", a, b);
    printf("The Addition of %d and %d is %d\n", a, b, a + b);
    // TO MULTIPLY
    printf("The Multiplication of %d and %d is %d\n", a, b, a * b);
    // TO DIVIDE
    // To get decimal answer we write (float) in front of a or b or on both with %f
    //(float)(a/b) gives 2, First Bracket is solved which are integers so Greatest Interger Answer GIF
    printf("The Division of %d and %d is %f\n", a, b, (float)a / b);
    // Remainder
    printf("The Remainder of %dand %d is %d\n", a, b, a % b);
    return 0;
}