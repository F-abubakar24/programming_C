#include<stdio.h>
int main()
{
    int t, l = 0, n, count = 0, ara[100];
    scanf("%d", &t);
    
    while(l < t)
    {
        scanf("%d", &n);
        char s[n];
        scanf("%s", &s);

        for (int i = 0; i < n; i++)
        {
            if(s[i-1] == '0' && s[i] == '1')
            {
                count++;
            }
            else if (s[i-1] == '1' && s[i] == '0')
            {
                count++;
            }
        }
        ara[l] = count;
        count = 0;
        l++;
    }

    for (int i = 0; i < t; i++)
    {
        printf("%d\n", ara[i]);
    }
    return 0;
}