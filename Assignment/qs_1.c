#include<stdio.h>
int main(){

                            // Answere No: 1;

    /* int a=5, b=13;
    //Write code here
    int x = a;
    a = b;
    b = x;
    //End of code
    printf("%d and %d" , a, b);  */


// ================================================================
// ================================================================
                            // Answere No: 2;

    /* int a,b,c,d;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    // printing the largest number;
    if(a>b && a>c && a>d){
        printf("Largest = %d\n",a);
    }else if(b>a && b>c && b>d){
        printf("Largest = %d\n",b);
    }else if(c>a && c>b && c>d){
        printf("Largest = %d\n",c);
    }else if(d>a && d>b && d>c){
        printf("Largest = %d\n",d);
    }

    // printing the smallest number;
    if(a<b && a<c && a<d){
        printf("Smallest = %d\n",a);
    }else if(b<a && b<c && b<d){
        printf("Smallest = %d\n",b);
    }else if(c<a && c<b && c<d){
        printf("Smallest = %d\n",c);
    }else if(d<a && d<b && d<c){
        printf("Smallest = %d\n",d);
    }
    printf("Please input 4 numbers: "); */

    // ================================================================
    // ================================================================
                            // Answere No: 3;

    /* int a,b,c=0,d=0;
    printf("Please Enter a Number: ");
    scanf("%d", &a);
    b = 10;
    for (; a != c;){
        c = a % b;
        b = b * 10;
        d++;
    }
    printf("%d", d); */

    // ================================================================
    // ================================================================
                            // Answere No: 4;

    /* int a, b = 0;
    scanf("%d", &a);
    while(a != 0){
        b += a % 10;
        a = a / 10;
    }
    printf("%d", b); */


    // ================================================================
    // ================================================================
                            // Answere No: 5;

    /* int a;
    scanf("%d", &a);
    while(a != 1){
        if(a%2 == 0){
            a = a / 2;
        }else{
            a--;
        }
        printf("%d\n", a);
    } */

    // ================================================================
    // ================================================================
                            // Answere No: 6;

    /* int a, b,x=0;
    scanf("%d%d", &a, &b);
    if(a>b){
        if(a%b == 0){
            printf("The first number is divisible by the second number.");
        }else{
            printf("None of them are divisible by the other.");
        }
    }else{
        if(b%a == 0){
            printf("The second number is divisible by the first number.");
        }else{
            printf("None of them are divisible by the other.");
        }
    } */
    

    // ================================================================
    // ================================================================
                            // Answere No: 7;

    /* int a, b, gcd=0;
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= a && i <= b; i++){
        if (a%i ==0 && b%i==0){
            gcd = i;
        }
        
    }
    printf("The GCD of %d and %d is %d",a, b, gcd); */


    // ================================================================
    // ================================================================
                            // Answere No: 8;

    /* int a, b, gcd=0, lcm=0;
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= a && i <= b; i++){
        if (a%i ==0 && b%i==0){
            gcd = i;
        }
        
    }
    lcm = (a * b) / gcd;

    printf("The LCM of %d and %d is %d",a, b, lcm); */


    // ================================================================
    // ================================================================
                                // Answere No: 9;

    /* int dividend,a,factor;
    printf("Enter a number: ");
    scanf("%d", &dividend);
    a = dividend / 2;
    printf("The factors of %d are: ", dividend);
    for (int i = 1; i <= a;i++){
        factor = dividend % i;
        if(factor == 0){
            printf("%d, ",i);
        }
    }
    printf("%d.",dividend); */


    // ================================================================
    // ================================================================
                                // Answere No: 10;

    /* int a,b,c,d;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a / 2;

    for (int i = 1; i <= b;i++){
        c = a % i;
        if(c == 0){
            d = i;
        }
    }
    if(d == 1){
        printf("Prime");
    }else{
        printf("Composite");
    } */




        return 0;
}