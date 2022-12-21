#include<stdio.h>

int find_prime(int *arr, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        if (arr[i] == 0 || arr[i] == 1)
            flag = 1;

        for (int j = 2; j <= arr[i] / 2; ++j) {
            if (arr[i] % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            ans++;
    }
    return ans;
}

int find_avarage(int *arr, int n){
    int sum = 0, count = 0;
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2 == 0)
        {
            sum += arr[i];
            count++;
        }
    }
    ans = sum / count;
    return ans;
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
    int prime = find_prime(arr, n);
    double avarage = find_avarage(arr, n);
    printf("Prime numbers: %d\n", prime);
    printf("Average of all even integers: %0.2f\n", avarage);

    return 0;
}