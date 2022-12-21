#include<stdio.h>
int recartion(int n);
int sum = 0;

int main()
{
    int n;
    scanf("%d", &n);
    recartion(n);
    printf("%d", sum);
    return 0;
}

int recartion(int n)
{
    sum += n;
    if(n > 1)
    {
        recartion(n - 1);
    }
}