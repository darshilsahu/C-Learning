// TO FIND AREA OF RECTANGLE OF INPUT VALUES
#include <stdio.h>
int main()
{
    printf("Enter Lenght: ");
    float Length, Breadth;
    scanf("%f", &Length);
    printf("Enter Breadth: ");
    scanf("%f", &Breadth);
    float Area;
    Area = Length * Breadth;
    printf("The Area of Rectangle is %f", Area);
    return 0;
}