#include<stdio.h>

int consecutive_even_num(int n)
{
    int x = (n / 4) - 3;
    for (int i = 0; i < 4; i++){
        printf("%d ", x);
        x += 2;
    }
    printf("\n");
}

int main()
{
    int n, t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        consecutive_even_num(n);
    }
    return 0;
}