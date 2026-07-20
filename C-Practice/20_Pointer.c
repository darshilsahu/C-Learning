#include <stdio.h>

void address(int x);
void address(int x){
    printf("The Address of x is %p \n",&x);
    return;
}

int main(){
    int i;
    printf("Enter Value of i: ");
    scanf("%d",&i);
    address(i);
    
    printf("The Address of %d is %p\n",i,&i);
    return 0;
}