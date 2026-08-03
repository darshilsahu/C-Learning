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
// int factorial(int x);
// int factorial(int x){
//     if(x==0 || x==1){
//         return 1;
//     }
//     else{
//         return factorial(x-1)*x;
//     }
    
// }

int binomial(int n,int r);
int binomial(int n,int r){
    if (r == 0 || r == n){
        return 1;
    }
    return binomial(n,r-1)*(n-r+1)/r;
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
        printf("%d ",binomial(n-1,i));
        
        
        
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