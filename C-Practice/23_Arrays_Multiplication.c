#include <stdio.h>
    
int main(){
    int table[10];
    int number;
    printf("Enter Number of Table that to be stored in Arrays: ");
    scanf("%d",&number);

    for (int i = 1; i < 11; i++)
    {
        table[i-1]=number*i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",table[i]);
    }
    
    
    return 0;
}