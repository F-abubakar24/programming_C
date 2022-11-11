#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int sum = 0;
    long long int persons = n-1;

    for(long long int i = 1; i < n; i++)
    {
        sum += persons;
        persons--;
    }
    printf("%lld", sum);

    return 0;
}