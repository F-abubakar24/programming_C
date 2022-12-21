#include<stdio.h>

int is_dist(int n)
{
    int ld;
    int count_digit[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (n>0)
    {
        ld = n % 10;
        count_digit[ld]++;
        n /= 10;
    }
    int i;
    for (int i = 0; i < 10; i++)
    {
        if(count_digit[i] > 1)
            return 0;
    }
    return 1;
}

int leap(int y)
{
    if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        return 1;
    else
        return 0;
}

int main()
{
    int x, ans=0;
    scanf("%d", &x);
    ans = is_dist(x);
    if(ans == 1 && leap(x) == 1)
        printf("Beautifull");
    else
        printf("So Sad");
    return 0;
}