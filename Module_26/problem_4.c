#include<stdio.h>

int sum_of_them(int n)
{
    if(n==1)
        return 1;
    else
        return sum_of_them(n - 1) + n;
}

int main()
{
    int n, summ;
    scanf("%d", &n);
    printf("%d", sum_of_them(n));
    return 0;
}