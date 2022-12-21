#include<stdio.h>
int main()
{
    int n, pos = 0, neg = 0, flg = 1, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(flg <= 3){
            pos += i;
        }
        if(flg > 3 && flg <=6){
            neg += i;
        }
        if(flg == 6){
            flg = 0;
        }
        flg++;
    }
    ans = pos - neg;
    printf("%d", ans);
    return 0;
}