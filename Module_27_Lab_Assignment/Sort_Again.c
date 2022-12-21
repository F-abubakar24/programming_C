#include<stdio.h>
#include<string.h>
char s[1000];

int sorter(int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(s[i] > s[j])
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
    int n=0;
    scanf("%s", &s);
    n = strlen(s);
    sorter(n);
    printf("%s", s);
    return 0;
}