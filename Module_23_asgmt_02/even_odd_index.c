#include<stdio.h>
void ans_print(int merge[],int n, int k){
    int i;
    for(i=0; i<n; i++){
        if(i==k){
            printf("\nThe %dth element in this sequence is %d", i, merge[i]);
            break;
        }
    }
}

void sqnc_even_odd(int arr[],int n, int k){
   int i;
   int merge[n], index=1;

   for(i=1; i<=n; i++){
       arr[i] = i;
        //printf("%d ", arr[i]);
   }

   for(i=1; i<=n; i++){
     if(arr[i]%2==0){
        merge[index] = arr[i];
        index++;
     }

   }

    for(i=1; i<=n; i++){
        if(arr[i]%2==1){
            merge[index] = arr[i];
            index++;
        }
    }

    for(i=1; i<=n; i++){
      printf("%d ",merge[i]);
    }

    ans_print(merge,n, k);
}

int main(){
   int n,i,k, pos=0;
   scanf("%d%d", &n,&k);
   int arr[100];

   sqnc_even_odd(arr, n, k);

   return 0;
}