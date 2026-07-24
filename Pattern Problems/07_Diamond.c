/*
____________________________
#To Print following Diamond Pattern
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
void diamond(int n);
void diamond(int n){
    if(n==1){
        printf("%*s*",lines,"");
        return;
    }
    diamond(n-2);
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
void invertdia(int n);
void invertdia(int n){
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
    printf("\n");
    if(n==1){
        printf("%*s*",lines-1,"");
        return;
    }
    
    invertdia(n-2);  
}
void pyramid(int n);
void pyramid(int n){
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
    
    pyramid(n-2);
    
    
    
       
    
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
        diamond(2*lines-1);
        printf("\n");
        pyramid(2*lines-1-2);
    }

    
    return 0;
}