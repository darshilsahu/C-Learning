/*TO PRINT FOLLOWING PATTERN
_____________________
1
12
123
1234
12345 and so on till nth lineSSS
_______________________`
*/

#include <stdio.h>
void incnum(int n);
void incnum(int n){
    if(n==1){
        printf("1");
        return;
    }
    incnum(n-1);
    printf("\n");
    for (int i = 1; i <=n; i++)
    {
        printf("%d",i);
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
        incnum(lines);
    }
    return 0;
}