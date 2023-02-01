#include<stdio.h>

int power(int base, int a)
{
    if(a != 0)
    {
        return (base * power(base, a - 1));
    }else {
        return 1;
    }
}

int main()
{
    int base, a, ans;
    scanf("%d", &base);
    scanf("%d", &a);
    ans = power(base, a);
    printf("%d", ans);

    return 0;
}