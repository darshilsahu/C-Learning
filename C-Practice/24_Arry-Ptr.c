#include <stdio.h>
int main(){
    int marks[10];
    //printf("Enter Your Number: ");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter Your Number: ");
        scanf("%d",&marks[i]);
    }
    int* ptr=marks;
    printf("The Value of first element from Pointer is %d\n",*ptr);
    printf("The Value of third element from Pointer is %d\n",*ptr+2);
    
    return 0;
}