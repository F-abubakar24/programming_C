#include<stdio.h>
#include<string.h>

int main ()
{
    char n[105];
    fgets(n, sizeof(n), stdin);
    

    for (int i = 0; i < strlen(n)-1; i++)
    {
        if(n[i] >= 'A' && n[i] <= 'Z')
        {
            n[i] += 32;
        }
        if( !(n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u' || n[i] == 'y')){
            printf(".%c", n[i]);
        }
    }

    return 0;
}