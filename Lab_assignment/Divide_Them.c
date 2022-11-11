#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int ar[n+1];

    for(int i = 1; i <= n; i++)
        scanf("%d", &ar[i]);
    
    int k;
    scanf("%d", &k);

    if(k == 0)
    {
        for(int i = 1; i <= n; i++)
            printf("%d ", ar[i]);
    }
    else
    {
        for(int i = k + 1; i <= n; i++)
            printf("%d ", ar[i]);

        for(int i = 1; i <= k; i++)
            printf("%d ", ar[i]);
    }
    return 0;
}