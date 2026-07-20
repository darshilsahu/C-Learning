#include <stdio.h>
int main(){
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    int* j=&num;
    printf("The Address of your number is %p\n",j);
    printf("The Address of your number in integer is %u\n",j);
    printf("The Address of pointer j is %p\n",&j);
    printf("The Address of pointer j in integer is %u\n",&j);
    printf("The value at address j is %d\n",*j);
    return 0;
}