/* #include<stdio.h>
int main(){
    int whoLarge[5], i,x = 0;
    for (i = 1; i <= 5;i++){
        scanf("%d", &whoLarge[i]);
    }
    for ( i = 0; i <= 5; i++){
        if(x < whoLarge[i]){
            x = whoLarge[i];
        }
    }
    printf("the large number: %d", x);
    return 0;
} */

/* #include<stdio.h>
int main(){
    int odd_even[]={23,43,12,54,67,334,65,23,56,23,76,23,78,45,78,324,23,65,76,87,4};
    int x;
    int arrySize = sizeof(odd_even)/sizeof(odd_even[0]);
    for (int i = 0; i < arrySize;i++){
        if(odd_even[i]%2==0){
            // printf("%d\n", odd_even[i]);
        }else{
            printf("%d\n", odd_even[i]);
        }
    }
        return 0;
} */



/* #include<stdio.h>
int main(){
    int find_missing_number[]={1,4,10,11,15,12,5,18,2,6,19,20,8,16,7,9,17,3,};
    int arrySize = sizeof(find_missing_number) / sizeof(find_missing_number[0]);
    int large_number=0,without_missing_number;

    for (int i = 0; i < arrySize; i++){
        if(large_number < find_missing_number[i]){
            large_number = find_missing_number[i];
        }
    }

    without_missing_number = large_number - arrySize;
    printf("%d", without_missing_number);
    return 0;
} */
