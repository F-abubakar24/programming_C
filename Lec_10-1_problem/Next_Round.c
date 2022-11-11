#include<stdio.h>
int main()
{
    int n,k,ans=0;
    scanf("%d %d", &n, &k);
    int arry[n];

    for (int i = 1; i <= n; i++){
        scanf("%d", &arry[i]);
    }
    for (int i = 1; i <= n; i++){
        if(arry[i] >= arry[k] && arry[i] > 0){
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}