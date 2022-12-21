#include<stdio.h>
int get_array(int n);
int max_min(int n, int k);
int ara[10000];

int main()
{
    int n, k, ans=0;
    scanf("%d", &n);
    get_array(n);
    scanf("%d", &k);
    ans = max_min(n, k);
    printf("%d", ans);
    return 0;
}

int get_array(int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
}

int max_min(int n, int k)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(ara[i] > k || ara[i] < k)
        {
            ans++;
        }
    }
    return ans;
}