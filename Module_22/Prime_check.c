#include<stdio.h>
int prime_check(int x);
int main()
{
    int n;
    scanf("%d", &n);
    prime_check(n);
    return 0;
}

int prime_check(int x)
{
    int is_prime = 1;
    for (int i = 2; i < x - 1; i++)
    {
        

        if(x%i == 0)
        {
            is_prime = 0;
            break;
        }
    }
    if(is_prime == 1)
    {
        printf("Prime Number\n");
    }else{
        printf("Composite Number\n");
    }
}