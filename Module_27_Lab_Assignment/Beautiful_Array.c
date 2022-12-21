#include <stdio.h>

int isBeautiful(int *arr, int n) 
{ 
    int count = 0; 
    for (int i = 0; i < n; i++)
    {
        while (arr[i] > 0) { 
            if (arr[i] % 10 == 7){
                count++; 
            }
            arr[i] = arr[i] / 10; 
        } 
    }
    return (count >= n / 2); 
} 

int main() 
{ 
    int n, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
  
    if (isBeautiful(arr, n))
        printf("Beautiful");
    else
        printf("Ugly");
  
    return 0;
}