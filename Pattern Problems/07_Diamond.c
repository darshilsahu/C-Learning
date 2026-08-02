/*
____________________________
#To Print following upperpyramid Pattern
     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *

  ....till nth lines
 ____________________________
*/
#include <stdio.h>
int lines;
void upperpyramid(int n);
void upperpyramid(int n){
    if(n==1){
        printf("%*s*",lines,"");
        return;
    }
    upperpyramid(n-2);
    printf("\n");
    for (int i = 1; i<=n; i++)
    {
        int f;
        f=(n+1)/2;
        if(i==1){
            printf("%*s*",lines-f+1,"");
        }
        else{
            printf("*");
        }
    }
}

void lowerpyramid(int n);
void lowerpyramid(int n){
    for (int i = 1; i <=n; i++)

    {
        int f;
        f=(n+1)/2;
        if(i==1){
            printf("%*s*",lines-f+1,"");
        }
        
        else{
            printf("*");
        }
        

        
    }
    printf("\n");
    if(n==1){
        //printf("%*s*",lines,"");
        return;
    }
    
    lowerpyramid(n-2);
    
    
    
       
    
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
        upperpyramid(2*lines-1);
        printf("\n");
        lowerpyramid(2*lines-1-2);
    }

    
    return 0;
}