#include<stdio.h>
int add_three_nums(int a, int b, int c);
int sum_two(int a, int b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = sum_two(a, b);
    int ans = add_three_nums(a, b, c);
    printf("%d", ans);

    return 0;
}

int add_three_nums(int a, int b, int c)
{
    return a+b+c;
}
int sum_two(int a, int b)
{
    return a + b;
}