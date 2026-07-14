#include <stdio.h>
int sum(int,int);
int sum(int x,int y){
    printf("The Sum of %d and %d is %d",x,y,x+y);
    return x+y;
}

int main(){
    int a,b;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter second Number: ");
    scanf("%d",&b);
    sum(a,b);

    
    
    return 0;
}