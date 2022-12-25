#include<stdio.h>

int main()
{
    int N, a = 0, b = 1, c = 0;
    scanf("%d",&N);

    for (int i = 0; i < N; i++)
    {
        if ( i <= 1 )
            c = i;
        else
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d, ",c);
    }
    return 0;
}