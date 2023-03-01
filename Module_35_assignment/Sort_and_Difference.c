#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar1[n];
    int ar2[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar2[i]);
    }

            // ascending order
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(ar1[j] > ar1[j+1])
            {
                temp = ar1[j];
                ar1[j] = ar1[j + 1];
                ar1[j + 1] = temp;
            }
        }
    }

            // descending order
    temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(ar2[j] < ar2[j+1])
            {
                temp = ar2[j];
                ar2[j] = ar2[j + 1];
                ar2[j + 1] = temp;
            }
        }
    }

            // difference
    int ar3[n];
    for (int i = 0; i < n; i++)
    {
        ar3[i] = ar1[i] - ar2[i];
    }

            // print the asn
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar3[i]);
    }

    return 0;
}