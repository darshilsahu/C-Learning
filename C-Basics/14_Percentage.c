#include <stdio.h>

int main(){
    float percentage,total;
    printf("Enter total out of 300: ");
    scanf("%f",&total);
    
    percentage=total*100/300;
    printf("Percentage = %f",percentage);
    return 0;
}