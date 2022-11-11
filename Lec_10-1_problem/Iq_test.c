#include<stdio.h>
int main()
{
    int arry[105], n, even=0,odd=0, ans;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        scanf("%d", &arry[i]);
    }
    for (int i = 1; i <= n; i++){
        if(arry[i]%2 == 0){
            even++;
        }else{
            odd++;
        }
        
    }

    if(even == 1){
        for (int i = 1; i <= n; i++){
            if(arry[i]%2 == 0){
                ans = i;
            }
        }
    }else{
        for (int i = 1; i <= n; i++){
            if(arry[i]%2 != 0){
                ans = i;
            }
            
        }
    }
    printf("%d", ans);
    
    return 0;
}