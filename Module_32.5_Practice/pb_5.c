#include<stdio.h>

int sum_of_n(int i, int n)
{
    if(i > n)
        return 0;
    int sum = sum_of_n(i + 1, n);
    return sum + i;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ans = sum_of_n(0, n);
    printf("%d", ans);
    return 0;
}