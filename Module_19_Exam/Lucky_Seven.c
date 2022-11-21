#include<stdio.h>
#include<string.h>

/* int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        char s[100], rs[100];
        scanf("%s", &s);
        int j = 0, palindrome = 1;
        for (int i = strlen(s)-1; i >= 0; i--)
        {
            rs[j] = s[i];
            j++;
        }
        for (int k = 0; k < strlen(s); k++)
        {
            if(s[k] != rs[k]){
                palindrome = 0;
            }
        }

        int length = strlen(s);
        if (palindrome == 1)
        {
            if(length > 7){
                printf("%c%d%c\n", s[0], length - 2, s[length - 1]);
            }else{
                printf("%s\n", s);
            }
        }else{
            printf("\"Not Palindrome\"\n");
        }
    }
    return 0;
} */


int main() {

    int N;
    scanf("%d", &N);
    int A[N];


    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    
    int max=0, calsum=0;
    for (int i = 0; i < N; i++)
    {
       if(A[i]%2 == 0)
       {
            if(A[i] > max)
            {
                max = A[i];
            }
       }
       for (int j = i + 1; j < N; j++)
       {
           calsum = A[i] + A[j];
           if (calsum % 2 == 0)
           {
               if (calsum > max)
               {
                   max = calsum;
               }
           }
       }
    }
    printf("%d\n", max);


    return 0;
}