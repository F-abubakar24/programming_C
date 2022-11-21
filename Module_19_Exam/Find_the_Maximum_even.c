#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N, i, j;
    scanf("%d", &N);

    int A[N];


    for(i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    int max=0, calsum=0;
    for(i=0; i<N; i++){
       if(A[i]%2 == 0){
            if(A[i] > max){
                max = A[i];
            }
       }

       for(j=i+1; j<N; j++){
         calsum= A[i]+A[j];
         if(calsum%2 == 0){
            if(calsum > max){
                max = calsum;
            }
         }

       }
    }

    printf("%d\n", max);  
    return 0;
}