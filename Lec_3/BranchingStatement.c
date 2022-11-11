#include<stdio.h>
int main()
{
    int x,y,z;
    printf("please enter Three inputs: ");
    scanf("%d%d%d",&x, &y, &z);

    if(x>y){
        if (x>z){
            printf("X is large");
        }else{
            printf("Z is large");
        }
        printf("X is large");
    }else if(y>z){
        printf("Y is large");
    }else{
        printf("Z is large");
    }






    return 0;
}
