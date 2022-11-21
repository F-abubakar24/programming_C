#include<stdio.h>

int point_to_point(int n);

int main()
{
    int n;
    scanf("%d", &n);
    point_to_point(n);
    return 0;
}

int point_to_point(int n)
{
    if(n >= 0){
        for (int i = n; i >= (-n); i--)
        {
            printf("%d ", i);
        }
    }
    else if (n < 0)
    {
        for (int i = n; i < n; i++)
        {
            printf("%d ", i);
        }
    }
    return 0;
}