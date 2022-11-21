#include<stdio.h>
int max_of_them(int x, int y, int z);

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int m = max_of_them(a, b, c);
    printf("%d", m);
    return 0;
}

int max_of_them(int x, int y, int z){
    if(x > y && x > z)
    {
        return x;
    }else if(y > x && y > z)
    {
        return y;
    }else{
        return z;
    }
}