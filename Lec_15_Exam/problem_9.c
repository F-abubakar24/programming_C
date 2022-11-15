#include<stdio.h>
#include<string.h>

int main()
{
    int  n = 11, temp = 0;
    int ara[] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};

    // Bubble sorting code
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if(ara[i] > ara[i+1])
            {
                temp = ara[i];
                ara[i] = ara[i+1];
                ara[i+1] = temp;
            }
        }

    }

    // printing the array after 5 times sort
    for (int l = 0; l < n; l++)
    {
        printf("%d  ", ara[l]);
    }

    return 0;
}