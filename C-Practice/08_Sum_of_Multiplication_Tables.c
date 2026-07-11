//To Find Sum of Multiplication Table(1-10) of any number
#include <stdio.h>

int main(){
    int i,number,sum=0;
    printf("Enter Number: ");
    scanf("%d", &number);
    i=0;
    while(i<=10){
        sum=sum+i;
        i++;
    }
    printf("The Sum of Multiplication Table is %d",number*sum);

    return 0;
}