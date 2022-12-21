#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=5;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    printf("%p\n", ptr);
    
    if(ptr == NULL){
        printf("Memory Allocation Failed");
    }else{
        for (int i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d\n", *(ptr + i));
        }
    }
    n = 10;
    int *pada;
    pada = realloc(ptr, n * sizeof(int));
    printf("%p\n", pada);
    if(pada == NULL){
        printf("Memory Allocation Failed");
    }else{
        for (int i = 5; i < n; i++)
        {
            scanf("%d", (pada + i));
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d\n", *(pada + i));
        }
    }
    free(ptr);
    free(pada);
    return 0;
}