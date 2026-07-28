//To change the value of a variable to ten times of its current value.

#include <stdio.h>

void change(int* x);
void change(int* x){
    *x=*x*10;
    
}

int main(){
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);

    change(&x);
    printf("\nValue of x = %d", x);
    
    return 0;
}