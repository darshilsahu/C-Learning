/*
____________________________
#To Print following Pattern
     *
    ***
   *****
  *******
 ********* ....till nth lines
 ____________________________
*/
#include <stdio.h>

int lines;

void pyramid(int n);
void pyramid(int n){
    if(n==1){
        printf("%*s*",lines-1,"");
        return;
    }
    
    pyramid(n-2);
    printf("\n");
    for (int i = 1; i <=n; i++)

    {
        int f;
        f=(n+1)/2;
        if(i==1){
            printf("%*s*",lines-f,"");
        }
        
        else{
            printf("*");
        }
        

        
    }
    
       
    
}
   

int main(){
    //int lines;
    printf("Enter Number of lines for pattern: ");
    scanf("%d", &lines);
    if (lines <= 0)
    {
        printf("LINES CANNOT BE ZERO OR NEGATIVE");
    }
    else
    {
        pyramid(2*lines-1);
        
        
    }
    return 0;
}