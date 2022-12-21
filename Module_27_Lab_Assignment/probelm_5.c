#include<stdio.h>

int sum_odd_even(int n)
{
    int ara[105], ans = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if(ara[i] % 2 == 0 && i%2 == 0)
        {
            ans += (ara[i] + i);
        }
        if(ara[i] % 2 == 1 && i%2 == 1)
        {
            ans += (ara[i] + i);
        }
    }
    if(ans != 0){
        return ans;
    }else{
        return 0;
    }
}

int main()
{
    int n, ans= 0;
    scanf("%d", &n);
    ans = sum_odd_even(n);
    printf("%d", ans);
    return 0;
}