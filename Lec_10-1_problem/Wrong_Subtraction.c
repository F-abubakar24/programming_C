#include<stdio.h>
int main()
{
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    for (long long int i = 0; i < k; i++){
        if(n%10 == 0){
            n = n / 10;
        }else{
            n--;
        }
    }
    printf("%d", n);
    return 0;
}