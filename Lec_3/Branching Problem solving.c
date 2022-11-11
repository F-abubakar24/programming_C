#include<stdio.h>
int main()
{
    int w;
    printf("Please Enter a number: ");
    scanf("%d",&w);
    if(w%4 == 0){
        printf("Possible");
    }else{
        printf("Impossible");
    }

    return 0;
}
