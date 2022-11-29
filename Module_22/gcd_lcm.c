#include<stdio.h>
int gcd_calculator(int x, int y);
int lcm_calculator(int x, int y);

int main()
{
    int x, y, gcd = 0;
    scanf("%d %d", &x, &y);

    printf("GCD: %d\n", gcd_calculator(x, y));
    printf("LCM: %d\n", lcm_calculator(x, y));

    return 0;
}

int gcd_calculator(int x, int y)
{
    int z, gcd;
    if(x < y){
        z = x;
    }else{
        z = y;
    }
    for (int i = z; i > 0; i--)
    {
        if(x%i == 0 && y%i == 0)
        {
            gcd = i;
            break;
        }
    }
    return gcd;
}

int lcm_calculator(int x, int y){
    return (x * y) / gcd_calculator(x, y);
}