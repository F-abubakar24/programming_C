#include<stdio.h>
int main()
{
    int row, col, x;
    scanf("%d %d", &row, &col);
    int abc[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &abc[i][j]);
        }
    }
    x = abc[0][0];

    if(row == col)
    {
        int ans = 1;
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                if(i == j){
                    if(x != abc[i][j]){
                        ans = 0;
                    }
                    continue;
                }
                if(abc[i][j] != 0){
                    ans = 0;
                }
            }
        }

        if(ans == 0){
            printf("No Scalar\n");
        }else{
            printf("Scalar\n");
        }


    }else{
        printf("No Scalar\n");
    }

    return 0;
}