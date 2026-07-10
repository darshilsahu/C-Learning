#include <stdio.h>

int main(){
    int i, start, end;
    printf("Enter Starting Number :");
    
    scanf("%d",&start);
    printf("Enter Ending Numeber :");
    scanf("%d",&end);
    if(start>end){
        for(i=start;i>=end;i--){
            printf("%d\n",i);
        }
    }
    else{
        for(i=end;i>=start;i--){
        printf("%d\n",i);
    }

    }    
    return 0;
}