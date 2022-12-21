#include<stdio.h>

int find_prime_num(int ara[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ara[i]);
    }
}

int main()
{
    int n, ara[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    find_prime_num(ara, n);
    return 0;
}