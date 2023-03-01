#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int k = 0; k < t; k++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int s;
        scanf("%d", &s);

        int flg = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == s){
                printf("Case %d: %d\n", k+1, i+1);
                flg = 1;
                break;
            }
        }
        if(flg == 0)
            printf("Case %d: Not Found\n", k+1);
    }
    return 0;
}