/*TO PRINT FOLLOWING PATTERN
_____________________
1
22
333
4444
55555 and so on till nth lineSSS
_______________________`
*/
#include <stdio.h>
void pattern(int n);
void pattern(int n){
    if(n==1){
        printf("1");
        return;
    }
    pattern(n-1);
    printf("\n");
    for(int i = 1; i<=n;i++){
        printf("%d",n);

    }
}

int main(){
    
    int lines;
    printf("Enter Number of lines for pattern: ");
    scanf("%d", &lines);
    if (lines <= 0)
    {
        printf("LINES CANNOT BE ZERO OR NEGATIVE");
    }
    else
    {
        pattern(lines);
    }
    return 0;
}