#include<stdio.h>

int swape_ara(int q, int *a)
{
    while(q--)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        int temp = a[l-1];
        a[l-1] = a[r-1];
        a[r-1] = temp;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int q;
    scanf("%d", &q);
    swape_ara(q, a);
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}