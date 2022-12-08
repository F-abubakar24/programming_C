/* #include<stdio.h>
#include<string.h>
char find_my_number();

int main()
{
    char s[1000];
    scanf("%s", &s);
    
    int x = find_my_number(s);
    if(x == 1){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}

char find_my_number(char s[])
{
    int ans = 0, btn1 = 0, btn2 = 0, btn3 = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i] == '1')
        {
            btn1 = 1;
        }else if(s[i] == '9')
        {
            btn2 = 1;
        }else if(s[i] == '7')
        {
            btn3 = 1;
        }
    }
    if(btn1 == 1 && btn2 == 1 && btn3 == 1)
    {
        ans = 1;
    }
    return ans;
} */




#include<stdio.h>
#include<string.h>
char find_my_number(char s[], char q);

int main()
{
    char s[1000];
    scanf("%s", &s);
    
    int x = find_my_number(s, '1');
    int y = find_my_number(s, '9');
    int z = find_my_number(s, '7');

    if(x == 1 && y == 1 && z == 1){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}

char find_my_number(char s[], char q)
{
    int ans = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i] == q){
            ans = 1;
        }
    }
    return ans;
}