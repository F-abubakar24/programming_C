#include<stdio.h>
#include<string.h>
char char_swape(char s[]);

int main()
{
    char s[1000];
    scanf("%s", &s);
    char_swape(s);
    return 0;
}

char char_swape(char s[])
{
     for (int i = 0; i < strlen(s); i++)
    {
        if('a' <= s[i] && s[i] <= 'z')
        {
            s[i] -= 32;
        }
        else if('A' <= s[i] && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    printf("%s", s);
}