#include<stdio.h>
#include<string.h>

int main()
{
    int n = 3, mx_sum = 0;
    int ara1[n][n], ara2[n][n], ans[n][n];

    puts("Give the 1st matrix");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ara1[i][j]);
        }
    }

    puts("Give the 1st matrix");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ara2[i][j]);
        }
    }

    // Maltiplication part
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                mx_sum += ara1[i][k] * ara2[k][j];
            }

            ans[i][j] = mx_sum;
            printf("%d  ", ans[i][j]);
            mx_sum = 0;
        }
        printf("\n");
    }


        return 0;
}