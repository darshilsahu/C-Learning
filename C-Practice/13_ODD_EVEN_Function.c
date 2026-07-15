#include <stdio.h>

void checkEvenOdd(int);
void checkEvenOdd(int x){
    if (x%2==0){
        printf("The Number is Even\n");
    }
    else{
        printf("The Number is Odd\n");
    }
}
int main(){
    int number,count,i;
    printf("Enter How many numbers you want to check: ");
    scanf("%d",&count);
    i=0;
    do{
        printf("Enter Number to Check: ");
        scanf("%d",&number);
        checkEvenOdd(number);
        i++;


    } while(i<count);
    
    
    return 0;
}