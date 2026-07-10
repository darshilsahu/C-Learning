//To Analyse a given number by the User
/*To do: Input,Even/Odd,Positive/Negative,
Divisiblity by 5 and 7 and its Multiplication Table*/
#include <stdio.h>
int main(){
    int number;
    //Input
    printf("Enter Number: ");
    scanf("%d",&number);
    //Even/Odd
    if(number%2==0){
        printf("Even/Odd : Even\n");
    }
    else {
        printf("Even/Odd : Odd\n");
    }
    //Positive/Negative
    if(number>0){
        printf("Positive/Negative : Positive\n");
    }
    else if(number==0){
        printf("Positive/Negative : None\n");
    }
    else {
        printf("Positive/Negative : Negative\n");
    }
    //Divisiblity by 5 and 7
    if (number==0){
        printf("Divisible by 5 : Yes\n"); 
        printf("Divisible by 7 : Yes\n");

    }
    else if(number%5==0 && number%7==0){
        printf("Divisible by 5 : Yes\n");
        printf("Divisible by 7 : Yes\n");
    }

    else if(number%5==0){
        printf("Divisible by 5 : Yes\n");
        printf("Divisible by 7 : No\n");

    }
    else if(number%7==0){
        printf("Divisible by 7 : Yes\n");
        printf("Divisible by 5 : No\n");
        
    }
    else{
        printf("Divisible by 5 : No\n");
        printf("Divisible by 7 : No\n");
        
    }
    //Multiplication Table
    printf("Multiplication Table\n");
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",number,i,i*number);
    }

    return 0;
}