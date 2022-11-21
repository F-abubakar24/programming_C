#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", &s);

    int plus = 1, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1 && s[i] == s[i+1])
        {
            plus++;
        }
        else
        {
            if(plus > count)
            {
                count = plus;
            }
            plus = 1;
        }
    }
    printf("%d", count);
    return 0;
}