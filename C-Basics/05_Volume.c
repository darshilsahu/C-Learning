// TO FIND VOLUME OF CYLINDER BY USER INPUT
#include <stdio.h>
int main()
{
    float Radius, Height;
    printf("Enter Radius :");
    scanf("%f", &Radius);
    printf("Enter Height: ");
    scanf("%f", &Height);
    float PI = 3.14;
    float Volume;
    Volume = PI * Radius * Radius * Height;
    printf("The Volume of Cylinder of Radius %f and Height %f is %f", Radius, Height, Volume);
    return 0;
}