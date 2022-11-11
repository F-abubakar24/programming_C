#include<stdio.h>
int main()
{
    int n, k, rejected=0;
    scanf("%d %d", &n, &k);
    int arry[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arry[i]);
    }
    for (int i = 0; i < n;i++){
        if(arry[i] < k){
            rejected++;
        }
    }
    printf("%d", rejected);
    return 0;
}