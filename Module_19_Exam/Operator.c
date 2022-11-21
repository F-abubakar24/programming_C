#include<stdio.h>
#include<string.h>
int main()
{
    char s[25];
    scanf("%s", &s);
    int x, y, sub_ans, ans;
    scanf("%d %d", &x, &y);
    ans = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i] == '*'){
            sub_ans = x * y;
            ans += sub_ans;
        }else if(s[i] == '+'){
            sub_ans = x + y;
            ans += sub_ans;
        }
    }
    printf("%d", ans);
    return 0;
}
    
