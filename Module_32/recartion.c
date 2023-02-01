/* #include<stdio.h>

void solve(int i, int n)
{
    if(i > n)
        return;

    printf("%d\n", i);
    solve(i + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    solve(1, n);

    return 0;
} */


// Reverce recartion function
#include<stdio.h>

void solve(int n)
{
    if(n == 0)
        return;

    printf("%d ", n);
    solve(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    solve(n);

    return 0;
}