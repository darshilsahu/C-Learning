#include <stdio.h>

int main(){
    int marks[5];
    printf("Enter your Marks\n");
    for (int i = 0; i <5; i++)
    {
        scanf("%d",&marks[i]);

    }
    for (int j = 0; j < 5; j++)
    {
        printf("Marks at %d is %d\n",j,marks[j]);
    }
    
    
    
    return 0;
}