//Temparature Celsius & Fahrenheit Units Convertor
#include <stdio.h>
// F=C*1.8+32
float Celsius_Fahrenheit(float c);
float Celsius_Fahrenheit(float c)
{
    
    return (c * 1.8) + 32;
}
float Fahrenheit_Celsius(float f);
float Fahrenheit_Celsius(float f)
{
    return (f - 32) * 5 / 9;
}
int main()
{
    float celsius, fahrenheit;
    int choice;
    
    printf("1.Celsius to Fahrenheit\n");
    printf("2.Fahrenheit to Celsius\n");
    printf("3.Exit\n");
    printf("Choose Your Conversion: ");
    scanf("%d",&choice);
    if (choice == 1)
    {
        printf("Enter Temperature in celsius: ");
        scanf("%f", &celsius);
        printf("The Temperature in Fahrenheit is %.2f", Celsius_Fahrenheit(celsius));
    }
    else if (choice == 2)
    {
        printf("Enter Temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        printf("The Temperature in Celsius is %.2f", Fahrenheit_Celsius(fahrenheit));
    }
    else if(choice==3){
        return 0;
    }
    else
    {
        printf("Choose 1 or 2");
    }

    return 0;
}