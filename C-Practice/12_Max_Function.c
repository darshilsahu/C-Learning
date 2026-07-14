#include <stdio.h>
int max(int,int);
int max(int x,int y){
    if (x>y){
        return x;
    }
    else {
        return y;
    }
   
}
int main(){
    int num1,num2;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    
    printf("Maximum = %d",max(num1,num2));
    return 0;
}