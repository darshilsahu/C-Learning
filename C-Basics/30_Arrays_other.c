#include <stdio.h>

int main(){
    int marks[]={80,78,93,54};
    for (int i = 0; i < 4; i++)
    {
        printf("The Value of Array at index %d is %d\n",i,marks[i]);
    }
    
    return 0;
}