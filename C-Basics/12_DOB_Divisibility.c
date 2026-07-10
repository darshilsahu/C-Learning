// To check whether the given number by user is divisible by their DOB--> day,the month, and the year separately.
#include <stdio.h>

int main()
{
    int day, month, year, number;

    printf("Enter Your Number :");
    scanf("%d", &number);

    printf("Enter Your DOB below\n");

    printf("Day: ");
    scanf("%d", &day);

    printf("Month: ");
    scanf("%d", &month);

    printf("Year: ");
    scanf("%d", &year);

    if (day == 0)
    {
        printf("Day Cannot be Zero.\n");
        return 0;
    }
    else if (day > 31)
    {
        printf("Invalid Day\n");   
        return 0; 
    }

    if (month == 0)
    {
        printf("Month Cannot be Zero.\n");
        return 0;
    }
    else if (month > 12)
    {
        printf("Invalid Month\n");
        return 0;
    }
        
    if (number % day == 0)
    {
        printf("Divisibility by Day : Yes\n");
    }
    else
    {
        printf("Divisiblity by Day : No\n");
    }
        
    if (number % month == 0)
    {
        printf("Divisiblity by Month : Yes\n");
    }
    else
    {
        printf("Divisiblity by Month : No\n");
    }
        
    if (number % year == 0)
    {
        printf("Divisiblity by Year : Yes\n");
    }
    else
    {
        printf("Divisiblity by Year : No\n");
    }
    
    return 0;
}