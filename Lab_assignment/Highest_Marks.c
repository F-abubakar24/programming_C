#include<stdio.h>
int main()
{
    int n, high_marks;
    scanf("%d", &n);
    int arry[n], need[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(high_marks < arry[i])
        {
            high_marks = arry[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", high_marks - arry[i]);
    }

    return 0;
}