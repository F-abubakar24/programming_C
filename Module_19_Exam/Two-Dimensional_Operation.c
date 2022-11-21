#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int abc[row+1][col+1];

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            scanf("%d", &abc[i][j]);
        }
    }

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if(abc[i][j] == i && abc[i][j] == j){
                abc[i][j] += 3;
            }else if(abc[i][j] == i){
                abc[i][j] += 2;
            }else if(abc[i][j] == j){
                abc[i][j] += 1;
            }
        }
    }

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("%d ", abc[i][j]);
        }
        printf("\n");
    }

    return 0;
}