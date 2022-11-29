#include<stdio.h>
int find_parity(int x);
int main()
{
    int n;
    scanf("%d", &n);
    int x = find_parity(n);
    if(find_parity(n))
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}

int find_parity(int x)
{
    if(x%2 == 0)
    {
        return 1;
    }
    else if(x%2 == 1)
    {
        return 0;
    }
}