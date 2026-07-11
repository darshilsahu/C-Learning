//To Sum numbers of fixed range 1-10 (using While loop)
#include <stdio.h>
int main(){
    int i,sum=0;
    i=0;
    while(i<=10){
        sum=sum+i;
        i++;
    }
    printf("The Sum of First 10 Natural No. is %d\n",sum);
    


    return 0;
}