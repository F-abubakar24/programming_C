#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    

    for (int i = 1; i <= n; i++){

        char word[10000];
        scanf("%s",word);
        int length = strlen(word);

        if(length > 10){
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
        }else{
            puts(word);
        }
    }

        return 0;
}