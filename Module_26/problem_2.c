#include<stdio.h>


void find_max_min(int n, int ara[], int *maxx, int *minn)
{
    *maxx = ara[0];
    *minn = ara[0];
    for (int i = 0; i < n; i++)
    {
        if(ara[i] > *maxx)
            *maxx = ara[i];
        if(ara[i] < *minn)
            *minn = ara[i];
    }
}

int main()
{
    int maxx, minn;
    int ara[] = {12, 6, 9, 3, 4, 21, 66};
    // printf("%d", sizeof(ara) / sizeof(int));
    int n = sizeof(ara) / sizeof(int);
    find_max_min(n, ara, &maxx, &minn);

    printf("max= %d, min= %d", maxx, minn);
    return 0;
}