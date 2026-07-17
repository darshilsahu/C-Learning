#include <stdio.h>
//fibonacci----> 0,1,1,2,3,5,
int fibonacci(int);
int fibonacci(int n){

    if(n==1 || n==2){
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int term;
    printf("Enter the Term of Fibonnaci Series: ");
    scanf("%d",&term);
    if(term<=0){
        printf("Invalid Input");
    }
    else{
        printf("The term %d of fibonnaci is %d",term,fibonacci(term));
    }
    


    
    return 0;
}