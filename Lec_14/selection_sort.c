#include<stdio.h>
int main()
{
    int n = 8;
    int ara[8] = {12, 7, 9, 3, 15, 2, 6, 5};
    int sorted_ara[n];


 //===================================
    for(int i = 0; i < n; i++){
        printf("->%d", ara[i]);
    }
    printf("\n");
//===================================


    for (int j = 0; j < n; j++)
    {
        int min = ara[0];
        int m_ind = 0;

        for (int i = 0; i < n; i++)
        {
            if(ara[i] < min){
                min = ara[i];
                m_ind = i;
            }
                
        }
        sorted_ara[j] = min;
        ara[m_ind] = 9999;

        //===================================
        for(int i = 0; i < n; i++){
            printf("%d,  ", ara[i]);
        }//===================================
        printf("\n");
    }

    for(int i = 0; i < n; i++){
        printf("sorded--> %d\n", sorted_ara[i]);
    }

    return 0;
}