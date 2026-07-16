// Sum of first n Natural Numbers using recursion
#include <stdio.h>
int sum(int x);
int sum(int x){
    if(x==1){
        return 1;
    }
    return sum(x-1)*(x+1)/(x-1);
}

int main(){
    int term;
    printf("Enter the Number of terms to be Sum: ");
    scanf("%d",&term);
    if(term<=0){
        printf("Term Cannot be zero or Negative");
    }
    else{
        printf("The sum of %d terms is %d",term,sum(term));
    }
    
    return 0;
}