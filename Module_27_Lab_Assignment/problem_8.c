#include<stdio.h>
#include<string.h>

void wornKeyboard(char *str, int n)
{
    for (int i = 1; i <= n; i++)
    {
        if(i%2 != 0){
            printf("%c", str[i-1]);
        }else{
            printf("%c", str[i-1]);
            printf("%c", str[i-1]);
        }
    }
}

int main(){
    char str[100], n=0;
    printf("Enter the string: ");
    scanf("%s", &str);
    n = strlen(str);
    wornKeyboard(str, n);
    return 0;
}