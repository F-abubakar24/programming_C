#include<stdio.h>

int swape(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 5, b = 7;
    swape(&a, &b);

    printf("a=%d, b=%d\n", a, b);
    return 0;
}