/*
____________________________
#To Print following Floyd's Triangle
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

  ....till nth lines
 ____________________________
*/
#include <stdio.h>
int lines;
void floyds(int n);
void floyds(int n){
    if(n==1){
        printf("1");
        return;
    }
    floyds(n-1);
    printf("\n");
    for (int i = 0; i <n; i++)
    {

        printf("%d\t",(n*(n-1)/2)+1+i);
    }
    
    
    
}

int main(){
    
    printf("Enter Number of lines for pattern: ");
    scanf("%d", &lines);
    if (lines <= 0)
    {
        printf("LINES CANNOT BE ZERO OR NEGATIVE");
    }
    else
    {
        floyds(lines);
    }

    return 0;
}