#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    
    while(test--)
    {
        long long int s, a, b, c;
        scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
        
        long long int sum = 0;
        sum += (a + b + c);
        
        printf("%lld\n", s - sum);
        
    }
    return 0;
}