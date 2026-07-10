#include <stdio.h>
int main(){
    int income,tax;
    printf("Enter Your Income: ");
    scanf("%d",&income);
    if(income>=250000 && income<=500000){
        tax=0.05*income;
        printf("Your Income tax is %d",tax);
    }
    else if(income>500000 && income<=1000000){
        tax=0.2*income;
        printf("Your Income tax is %d",tax);
    }
    else if(income>1000000){
        tax=0.3*income;
        printf("Your Income tax is %d",tax);
    }
    else{
        printf("You are exempted from taxes");
    }


    return 0;
}