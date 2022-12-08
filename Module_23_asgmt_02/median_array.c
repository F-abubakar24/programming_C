#include<stdio.h>
int median_calculator(int arr[], int n);

int main()
{
    int n, ans=0;
    scanf("%d", &n);
    int arr[n+2];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    ans = median_calculator(arr, n);
    printf("%d", ans);
    return 0;
}

int median_calculator(int arr[], int n)
{
    int temp=0, ans=0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    if(n%2 == 0)
    {
        int x = n / 2;
        ans = (arr[x] + arr[x + 1]) / 2;
    }
    else if(n%2 == 1)
    {
        int x = (n / 2)+1;
        ans = arr[x];
    }
    return ans;
}