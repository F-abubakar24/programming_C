#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            printf(" ");
        }
        for (int j = (i*2-1); j >= 1; j--)
        {
            if(i%2 == 0)
                printf("*");
            else
                printf("^");
        }
        printf("\n");
    }
    
    return 0;
}