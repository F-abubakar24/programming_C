#include<stdio.h>
int main()
{
    int a, i, x, y, z;
    scanf("%d%d", &x, &y);
    a = x / 2;
    
    if(x%2 == 0){
        if(a >= y){
            z = y * 2 - 1;
            printf("%d", z);  
        }else{
            z = y - a * 2;
        }
    }else{
        if(a+1 >= y){
            z = y * 2 - 1;
        }else{
            i = y - a + 1;
            z = i * 2;
        }
    }
}
    // printf("%d", z);

