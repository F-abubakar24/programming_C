/* #include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int low, high, flag;
        scanf("%d %d", &low, &high);

        while (low <= high)
        {
            flag = 0;
            if (low <= 1)
            {
                if (low==1)
                {
                    printf("1 ");
                }
                low++;
                continue;
            }
            for (int j = 2; j <= low / 2; j++)
            {
                if (low % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                printf("%d ", low);
            }
            low++;
        }
        printf("\n");
    }
} */










// =============================================================
// =============================================================
// =============================================================

// My Code


#include <stdio.h>

int isPrime(int x)
{
    if(x <= 1){
        if(x == 1) return 1;
        return 0;
    }
    
    for (int i = 2; i <= x/2; i++)
    {
        if(x%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int L, R;
        scanf("%d %d", &L, &R);

        for (int i = L; i <= R; i++)
        {
            if(isPrime(i)){
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}