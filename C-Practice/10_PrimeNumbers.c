//Prime Number Finder using loops
#include <stdio.h>

int main(){
    int number,i,checker=0;
    printf("Enter Your Number: ");
    scanf("%d",&number);
    if(number<=0 || number==1){
        printf("NONE");
        return 0;
    }
    for (i = 2; i<number; i++)
    {
        if(number%i==0){
            checker=1;
            break;
        }
    }
    if(checker==1){
        printf("The Number is Not a Prime");
    }
    else{
        printf("The Number is Prime");
    }
    
    return 0;
}