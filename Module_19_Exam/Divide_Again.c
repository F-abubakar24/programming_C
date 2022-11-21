#include<stdio.h>
int main()
{
    long long int x, divident;
    scanf("%d", &x);
    if(x%3 == 0){
        printf("%d", x / 3);
    }else{
        printf("%d", -1);
    }

    return 0;
}