#include<stdio.h>
int main()
{
    long long int n,x;
    long long int ara[201000];
    scanf("%lld", &n);

    for (long long int i = 1; i < n; i++)
    {
        scanf("%lld", &x);
        ara[x] = 1;
    }
    for (long long int i = 1; i <= n; i++)
    {
        if(ara[i] == 0)
        {
            printf("%lld",i);
            break;
        }
    }
    return 0;
}