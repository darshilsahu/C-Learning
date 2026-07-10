//Show Number Given by user is weather divisible by their Birth Date or Not
#include <stdio.h>
int main(){
    int number;
    printf("Enter Your Number :");
    scanf("%d",&number);

    int date;
    printf("Enter Your Birth Date :");
    scanf("%d",&date);

    if (date==0){
        printf("Date can not be zero.");
    }

    else if (number%date==0)
    {
        printf("Divisible, Your Number is Divisible by Your Birth Date.\n");
    }
    else
    {
        printf("Your number is not divisible by your birth date.\n");
    }
    return 0;
}