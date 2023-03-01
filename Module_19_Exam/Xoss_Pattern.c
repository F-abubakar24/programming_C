#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int j = 1; j <= n; j++){
        printf("%d", j);
    }
    printf("\n");
    for (int i = 2; i < n; i++)
    {
        printf("%d", i);
        for (int j = 2; j <= n; j++)
        {
            if (j == n)
            {
                printf("%d", j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int j = 1; j <= n; j++){
        printf("%d", n);
    }
    return 0;
}

/* #include <stdio.h>

int main()
{
    int i, j, N;

    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N; j++)
        {
            if (j == 1 || i == N)
            {
                printf("%d", i);
            }
            else if (i == 1 || j == N)
            {
                printf("%d", j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
} */