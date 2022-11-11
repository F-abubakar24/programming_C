#include<stdio.h>
#include<string.h>

int main()
{
    char word[10000];
    fgets(word, sizeof(word), stdin);
    int length = strlen(word);
    printf("%d", length - 1);

    return 0;
}