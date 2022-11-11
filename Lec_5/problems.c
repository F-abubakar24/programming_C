#include<stdio.h>
int main()
{
    // Problem No: 1;

    // using for loop;
    /* int n;
    printf("Please Enter a Number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n;i++){
        printf("%d\n", i);
    } */

    // using while loop;
    /* int x, y = 1;
    printf("Please Enter a Number: ");
    scanf("%d", &x);
    while(y<=x){
        printf("%d\n", y);
        y++;
    } */

    //=====================================================================
    //=====================================================================

    // Problem No: 2
    /* int n;
    printf("Please Enter a number: ");
    scanf("%d", &n);

    if(n>1){
        for (int i = 1; i <= n; i++){
            printf("%d\n", i);
        }
    }else{
        for (int i = 1; i >= n; i--){
            printf("%d\n", i);
        }
    } */

    //=====================================================================
    //=====================================================================
    // Problem No: 3;
    /* int x;
    printf("Please Enter a Number: ");
    scanf("%d", &x);

    for (int i = 2; i <= x;i+=2){
        printf("%d\n", i);
    } */



    //=====================================================================
    //=====================================================================
    // Problem No: 4;
    /* int x,y,z;
    printf("Please Enter 2 numbers: ");
    scanf("%d%d", &x, &y);
    // int z = y;

    for (int i = 1; z < x;i++){
        if(z != 0){
            printf("%d\n", z);
        }
        z = y * i;
    } */


        //=====================================================================
        //=====================================================================
        // Problem No: 5;
       /*  int divident,a,factor;
        printf("Enter a number: ");
        scanf("%d", &divident);
        a = divident / 2;


        for (int i = 1; i <= a;i++){
            factor = divident % i;
            if(factor == 0){
                printf("%d\n",i);
            }
        }
        // printf("%d\n",divident); */



    //=====================================================================
    //=====================================================================
    // Problem No: 6;
    int n, m, temp = 24;
    printf("Please enter: ");
    scanf("%d%d", &n, &m);

    if(n>m){
        for (int i = n; i <= temp;i++){
            if(i==24){
                i = 0;
                temp = m;
            }
            printf("%d\n", i);
        }
    }
    for (int i = n; i <= m;i++){
        printf("%d\n", i);
    }
    


   /* int n, m;
    scanf("%d%d", &n, &m);
    while(n!=m){
        printf("%d\n", n);
        if(n==23){
            n = 0;
        }else{
            n++;
        }
    }
    printf("%d\n", n); */

    return 0;
}