/* #include<stdio.h>
#include <string.h>
 
int main()
{
    char m[105], n[105], ans ,i;
    printf("Enter for A: ");
    fgets(m, sizeof(m), stdin);
    printf("Enter for B: ");
    fgets(n, sizeof(n), stdin);
 
    for (int j = 0; j < strlen(n); j++)
    {
        if(m[j] >= 'A' && m[j] <= 'Z'){
            m[j] += 32;
        }
        if(n[j] >= 'A' && n[j] <= 'Z'){
            n[j] += 32;
        }
    }
 
    for (i = 0; i < strlen(m) - 1; i++)
    {
        if (m[i] < n[i])
        {
            printf("A will 1st position");
            return 0;
        }
        else if (m[i] > n[i])
        {
            printf("B will 1st position");
            return 0;
        }
    }
    
    return 0;
} */
