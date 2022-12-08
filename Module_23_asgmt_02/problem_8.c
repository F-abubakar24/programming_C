#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s", &s);
    int n, flg=1, m = 0;
    scanf("%d", &n);

    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i] >= 'A' && 'Z' >= s[i])
        {
            flg = 0;
        }else{
            int sub_ans = s[i] += n;
            if(sub_ans > 122)
            {
                m = sub_ans - 122;
                s[i] = 96 + m;
            }
        }
    }
    if(flg == 1)
    {
        printf("%s", s);
    }else{
        printf("Don't use capital letters");
    }
}