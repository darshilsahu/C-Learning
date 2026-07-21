#include <stdio.h>
int sum(int* x,int* y);
int sum(int* x,int* y){
    *x=10;
    return (*x+*y);
}

int main(){
    int a=4;
    int b=6;
    
    printf("The sum of %d and %d is %d\n",a,b,sum(&a,&b));
    printf("The value of a is %d\n",a);
    return 0;
}