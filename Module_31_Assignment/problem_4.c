#include<stdio.h>
#include<string.h>

int ascending_order(char *s, int len)
{
    int temp = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if(s[i] < s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
            
        }
    }
}

int main()
{
    char s[1000];
    int len;
    scanf("%s", &s);
    len = strlen(s);

    ascending_order(s, len);
    printf("%s", s);

    return 0;
}