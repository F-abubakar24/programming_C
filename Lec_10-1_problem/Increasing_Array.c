#include<stdio.h>
int main()
{
    int n, arry[200005];
    scanf("%d", &n);
    long long int moves = 0;

    for (long long int i = 0; i < n; i++){
        scanf("%lld", &arry[i]);
    }

    for (long long int i = 1; i < n; i++){
        if(arry[i-1] > arry[i]){
            moves += (arry[i - 1] - arry[i]);
            arry[i] = arry[i - 1];
        }
    }
    printf("%lld", moves);
    return 0;
}