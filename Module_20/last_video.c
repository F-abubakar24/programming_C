#include<stdio.h>
int shat_present(int n);
int dgsum(int n);
int ldg_prime(int n);

int main()
{
    int n;
    scanf("%d", &n);
    if(shat_present(n) == 1 && dgsum(n) > 10 && ldg_prime(n) == 1)
    {
        printf("Yes My number");
    }
    else
    {
        printf("No");
    }
    return 0;
}

int shat_present(int n)
{
    int ld = n % 10;
    if(ld == 2 || ld == 3 || ld == 5 || ld == 7)
    {
        return 1;
    }else{
        return 0;
    }
}

int dgsum(int n)
{
    int sum = 0;
    while(n>0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int ldg_prime(int n)
{
    while (n>0)
    {
        if(n%10 == 7)
        {
            return 1;
        }
        n /= 10;
    }
    return 0;
}