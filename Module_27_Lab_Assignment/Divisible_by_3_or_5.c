#include<stdio.h>

int ara[105], ans = 0;

int divisible_by_3(int n)
{
    for (int i = 0; i < n; i++)
    {
        if(ara[i]%3 == 0){
            ans++;
            ara[i] = 2;
        }
    }
}

int divisible_by_5(int n)
{
    for (int i = 0; i < n; i++)
    {
        if(ara[i]%5 == 0){
            ans++;
            ara[i] = 2;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    divisible_by_3(n);
    divisible_by_5(n);
    
    if(ans != 0){
        printf("%d", ans);
    }else{
        printf("%d", -1);
    }
    return 0;
}