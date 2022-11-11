#include<stdio.h>
int main(){

    int x,y,z;
    printf("Enter the Number of Passengers: ");
    scanf("%d", &x);
    int i = 1;
    while (i <= x){
        printf("Enter a person weight: ");
        scanf("%d", &y);
        z = z + y;
        i++;
    }
    printf("%d", z);

    return 0;
}