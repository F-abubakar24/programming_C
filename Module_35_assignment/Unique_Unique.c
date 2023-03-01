#include<stdio.h>
#include <string.h>
#define MAX_CHAR 26

int main() {
    int n, i, j;
    char str[101];

    int freq[MAX_CHAR] = {0};

    scanf("%d", &n);
    scanf("%s", str);
    int len = strlen(str);

    for (i = 0; i < len; i++) {
        freq[str[i] - 'a']++;
    }

    int count = 0;
    for (i = 0; i < MAX_CHAR; i++) {
        if (freq[i] == 1) {
            count++;
        }
    }
    
    printf("%d", count);
    return 0;
}