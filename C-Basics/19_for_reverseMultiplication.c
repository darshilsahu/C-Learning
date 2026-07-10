#include <stdio.h>
int main()
{
    int i,start, number, end;
    printf("Enter Number :");
    scanf("%d", &number);
    printf("Enter Starting Table :");
    scanf("%d", &start);
    printf("Enter Ending Table :");
    scanf("%d", &end);
    //Reverse Multiplication
    for(i=end;i>=start;i--){
        printf("%d X %d = %d\n",number,i,i*number);
    }
    return 0;
}