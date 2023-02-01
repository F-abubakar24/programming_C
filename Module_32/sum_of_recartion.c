#include<stdio.h>

int s = 0;
int solve(int i, int n)
{
    if(i > n)
        return 0;
    s = s + i;
    solve(i + 1, n);
    return s;
}

int main()
{
    int n;
    scanf("%d", &n);
    solve(1, n);
    printf("\n%d", s);
    return 0;
}