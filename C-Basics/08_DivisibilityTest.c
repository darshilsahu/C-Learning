// To Check weather a given integer is divisible by 87 or not
#include <stdio.h>
int main()
{
    int num;
    printf("Enter Your Number :");
    scanf("%d", &num);
    int check = num % 87;
    printf("If Remainder =0 The given number is divisible by 87\n");
    printf("Remainder :%d",check);
    return 0;
}