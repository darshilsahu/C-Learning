#include <stdio.h>
int main()
{
    int a = 7;
    int b = 10;
    int c = 5;
    printf("The Value of Expression is %f\n", (float)a / b * c);
    // Evaluate the Expression (5a+6b+8c-20)/5
    printf("The Value of Expression is %d\n", (5 * a + 6 * b + 8 * c - 20) / 5);
    // Evaluate the Expression (3*x/y – z+k) x=2, y=3, z=3, k=1
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;
    int l = 3 * x / y - z + k;
    printf("The Value of Expression 3*x/y – z+k is %d", l);
    return 0;
}