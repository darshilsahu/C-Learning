/*
____________________________
#To Print following Pascal Triangle
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1


  ....till nth lines
 ____________________________
*/
#include <stdio.h>
int lines;
int factorial(int x);
int factorial(int x){
    if(x==0 || x==1){
        return 1;
    }
    else{
        return factorial(x-1)*x;
    }
    
}

void binomial(int n,int r);
void binomial(int n,int r){
    int value=factorial(n)/(factorial(n-r)*factorial(r));
    
    printf("%d ",value);
    return;


}
void pascal(int n);
void pascal(int n){
    if(n==1){
        printf("%*s1",lines-1,"");
        return;
    }
    pascal(n-1);
    printf("\n");
    printf("%*s",lines-n,"");
    
    for (int i = 0; i <n; i++)
    {
        binomial(n-1,i);
        
        
    }
    

}

int main(){
    printf("Enter Number of lines: ");
    scanf("%d",&lines);
    if(lines<=0){
        printf("Invalid");
    }
    else{
        pascal(lines);

    }
    
    return 0;
}