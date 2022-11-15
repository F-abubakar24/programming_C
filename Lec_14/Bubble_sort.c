#include<stdio.h>
int main()
{
    int n = 8,temp=0;
    int ara[8] = {12, 7, 9, 3, 15, 2, 6, 5};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(ara[i] < ara[j])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++){
        printf("%d\n", ara[i]);
    }
        return 0;
}