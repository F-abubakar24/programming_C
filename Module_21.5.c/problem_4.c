#include<stdio.h>
int even_num(int n);
int main()
{
    int n;
    scanf("%d", &n);
    even_num(n);
    return 0;
}

int even_num(int n)
{
    for (int i = 2; i <= n; i+=2)
    {
        printf("%d ", i);
    }
}