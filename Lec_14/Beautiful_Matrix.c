#include<stdio.h>
int main()
{
    int n = 5, y, x, ans = 0;
    int bt_array[5][5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &bt_array[i][j]);
            if(bt_array[i][j] == 1){
                y = i;
                x = j;
            }
        }
    }
    if(y > 2){
        ans += y - 2;
    }else{
        ans += 2 - y;
    }

    if(x > 2){
        ans += x - 2;
    }else{
        ans += 2 - x;
    }
    printf("%d", ans);

    return 0;
}