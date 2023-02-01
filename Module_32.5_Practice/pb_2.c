#include<stdio.h>

int last_word_som(int arr[], int n)
{
    if (n == 0)
        return 0;
    int ans = last_word_som(arr + 1, n-1);
    return ans + arr[0] % 10;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans = last_word_som(arr, n);
    printf("%d", ans);

    return 0;
}