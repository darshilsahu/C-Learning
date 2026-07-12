//Factorial-->5!=5*4*3*2*1=120
#include <stdio.h>

int main(){
    int i=1,number,factorial=1;
    printf("Enter Your Number: ");
    scanf("%d",&number);
    while(i<=number){
        factorial=factorial*i;
        i++;   
    }
    printf("The Factorial Value of %d is %d",number,factorial);


    
    return 0;
}