#include <stdio.h>

int main(){
    char st[20];
    fgets(st, 20,stdin);
    printf("%s",st);
    puts(st);
    return 0;
}