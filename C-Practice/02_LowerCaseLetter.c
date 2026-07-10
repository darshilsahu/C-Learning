#include <stdio.h>
int main()
{
    char character;
    printf("Enter Your Character: ");
    scanf("%c", &character);
    //We Use ASCII Keys
    if (character >= 97 && character <= 122)
    {
        printf("Lowercase");
    }
    else
    {
        printf("It is not lowercase");
    }
    return 0;
}