#include<stdio.h>

long gcd(long x, long y)
{
    if(x == 0)
    {
        return y;
    }
    while (y != 0)
    {
        if(x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
    return x;
}

int main()
{
    int test, count = 0;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(arr[i] != arr[j])
                {
                    int temp = gcd(arr[i], arr[j]);
                    if(temp == 1)
                    {
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}