#include<stdio.h>

int summ_of_dgd(int a)
{
    int summ = 0;
    while (a > 0)
    {
        summ += (a % 10);
        a /= 10;
    }
    return summ;
}

int is_prime (int n)
{
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    if(is_prime(summ_of_dgd(n)) == 1)
        printf("AbuBakar's Number\n");
    else
        printf("No\n");

    return 0;
}