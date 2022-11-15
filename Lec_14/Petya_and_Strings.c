#include<stdio.h>
#include <string.h>

int main()
{
    char m[105], n[105], ans;
    fgets(m, sizeof(m), stdin);
    fgets(n, sizeof(n), stdin);

    for (int j = 0; j < strlen(n); j++)
    {
        if(m[j] >= 'A' && m[j] <= 'Z'){
            m[j] += 32;
        }
        if(n[j] >= 'A' && n[j] <= 'Z'){
            n[j] += 32;
        }
    }

    for (int i = 0; i < strlen(m) - 1; i++)
    {
        if (m[i] < n[i])
        {
            printf("-1");
            return 0;
        }
        else if (m[i] > n[i])
        {
            printf("1");
            return 0;
        }
    }
    printf("0");

    return 0;
}