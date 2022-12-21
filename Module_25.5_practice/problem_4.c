#include<stdio.h>
int recartion(int n);
int main()
{
    int n;
    scanf("%d", &n);
    recartion(n);
    return 0;
}

int recartion(int n)
{
    printf("%d ", n);
    if(n > 1)
    {
        recartion(n - 1);
    }
}