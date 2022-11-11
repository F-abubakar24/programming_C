#include<stdio.h>
int main(){
    int x, y, a,b =0;
    scanf("%d%d", &x, &y);
    for (int i = 1; i <= x;i++){
        scanf("%d",&a);
        if(a>y){
            b += 2;
        }else{
            b++;
        }
    }
    printf("%d", b);
    return 0;
}