#include<stdio.h>
int fact(int n);

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    int perm = fact(n) / fact(n-r);
    int comb = fact(n) / (fact(n-r) * fact(r));
    printf("nPr = %d\n", perm);
    printf("nCr = %d\n", comb);

    return 0;
}

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}