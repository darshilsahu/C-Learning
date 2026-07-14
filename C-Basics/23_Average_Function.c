//To Find Average of two numbers using sum function
#include <stdio.h>
int sum(int,int);
int sum(int x,int y){
    return x+y;
}

int main(){
    int a,b;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter second Number: ");
    scanf("%d",&b);
    printf("The Average of %d and %d is %.1f",a,b,sum(a,b)/2.0);

    
    
    return 0;
}