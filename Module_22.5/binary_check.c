#include<stdio.h>
#include<string.h>
int binary_str_check(int s_len, char s[]);
int main()
{
    int s_len = 0, is_binary= 0;
    char s[10000];
    scanf("%s", &s);
    s_len = strlen(s);
    is_binary = binary_str_check(s_len, s);
    
    if(is_binary == 1)
    {
        printf("Yes");
    }else
    {
        printf("No");
    }
    return 0;
}

int binary_str_check(int s_len, char s[])
{
    int ans = 1;
    for (int i = 0; i < s_len; i++)
    {
        if(s[i] == '0' || s[i] == '1')
        {
            ans = 1;
        }else{
            ans = 0;
        }
    }
    return ans;
}