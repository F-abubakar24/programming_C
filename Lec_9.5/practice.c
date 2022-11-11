                                    // Problem No: 1;

/* #include<stdio.h>
int main()
{
    int x = 0, n=5, arry[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arry[i]);
    }
    for (int j = n; j >= 0;j--){
        x = arry[j];
        if(x != 0){
            printf("%d ", x);
        }
    }
    return 0;
} */

// =========================================================================
// =========================================================================
// =========================================================================
                                    // Problem No: 2;
#include<stdio.h>
int main()
{
    int x = 0, y=0, n=5, arry[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arry[i]);
    }
    printf("How many number have to change: ");
    scanf("%d", y);

    for (int j = 0; j < y;j++){
        
        printf("%d ", arry[j]);
    }
    return 0;
}