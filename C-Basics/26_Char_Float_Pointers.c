#include <stdio.h>
int main(){
    char letter;
    printf("Enter the character: ");
    scanf(" %c",&letter);
    char* j=&letter;
    float num;
    printf("Enter the number: ");
    scanf("%f",&num);
    float* k=&num;
    printf("The address stored in pointer k is %p\n",k);
    printf("The address stored in pointer j is %p\n",j);
    printf("The address stored in pointer j in integer is %u\n",j);
    printf("The address stored in pointer k in intger is %u\n",k);
    printf("The Address of pointer j is %p\n",&j);
    printf("The Address of pointer k is %p\n",&k);
    printf("The Address of pointer k in integer is %u\n",&k);
    printf("The Address of pointer j in integer is %u\n",&j);
    printf("The value at address j is %c\n",*j);
    printf("The value at address k is %f\n",*k);
    return 0;
}