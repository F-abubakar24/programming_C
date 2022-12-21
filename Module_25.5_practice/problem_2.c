#include<stdio.h>
int array_sorting(int n);
int largest_element(int n, int k);
int smallest_element(int n, int k);
int ara[10000];

int main()
{
    int n, k, ans=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    scanf("%d", &k);

    array_sorting(n);
    largest_element(n, k);
    smallest_element(n, k);
    return 0;
}

int array_sorting(int n)
{
    int tmp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(ara[j] < ara[i])
            {
                tmp = ara[i];
                ara[i] = ara[j];
                ara[j] = tmp;
            }
        }
    }
}

int largest_element(int n, int k)
{
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if(ara[i] > k)
        {
            largest++;
        }
    }
    printf("%dth largest element = %d\n", k, largest);
}

int smallest_element(int n, int k)
{
    int smallest = 0;
    for (int i = 0; i < n; i++)
    {
        if(ara[i] < k)
        {
            smallest++;
        }
    }
    printf("%dth smallest element = %d\n", k, smallest);
}