#include<stdio.h>
int main(){
    int a,b;
    scanf("%d", &a);
    if(a%5 != 0){
        b = a / 5+1;
    }else{
        b = a / 5;
    }
    printf("%d", b);
    return 0;
}