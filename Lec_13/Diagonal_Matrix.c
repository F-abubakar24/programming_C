#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int abc[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &abc[i][j]);
        }
    }

    if(row == col)
    {
        int ans = 1;
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                if(i == j){
                    continue;
                }
                if(abc[i][j] != 0){
                    ans = 0;
                }
            }
        }

        if(ans == 0){
            printf("No Diagonal\n");
        }else{
            printf("Diagonal\n");
        }


    }else{
        printf("No Diagonal\n");
    }

    return 0;
}