#include <stdio.h>
void cal(int *x, float *y);
void cal(int *x, float *y)
{
    int sum = *x + *y;
    float avg = (*x + *y) / 2.0;
    *x = sum;
    *y = avg;
}

int main()
{
    int a;
    float b;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%f", &b);
    cal(&a, &b);

    printf("The value of sum is %d\n", a);
    printf("The value of average is %.2f\n", b);
    return 0;
}