#include <stdio.h>
int main(){
    int i,f;
    i=1;
    printf("Enter Number to get Table: ");
    scanf("%d",&f);
    while(i<11){
        printf("%d X %d =%d\n",f,i,i*f);
        i++;
    }
    
    return 0;
}