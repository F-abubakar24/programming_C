#include<stdio.h>
int main()
{
    int n = 15;
    int ara[n];
    ara[0] = 1;
    for (int i = 1; i < n; i++){
        ara[i] = ara[i-1] * 2;
    }

    // this loop is for check the output
    for (int i = 0; i < n; i++){
        printf("%d ---> %d\n",i+1, ara[i]);
    }

    return 0;
}