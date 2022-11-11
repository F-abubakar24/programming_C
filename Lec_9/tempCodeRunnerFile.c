#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    for (int i = 0; i <= x;i++){
        printf("#");
    }
    printf("\n");

    for (int i = 1; i <= (x - 2);i++){
        printf("#");
        for (int j = 1; j <= (x-1);j++){
            printf(" ");
        }
        printf("#\n");
    }

    for (int i = 0; i <= x; i++){
        printf("#");
    }
    printf("\n");
        return 0;
}