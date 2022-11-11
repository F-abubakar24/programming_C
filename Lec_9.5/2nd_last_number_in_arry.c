#include<stdio.h>
int main()
{
    int n, temp;
    scanf("%d", &n);
    int arry[n], sort[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arry[i] < arry[j]){
                temp = arry[i];
                arry[i] = arry[j];
                arry[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arry[i]);
    }

        return 0;
}