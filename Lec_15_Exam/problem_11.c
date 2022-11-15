#include<stdio.h>
int main()
{
    int row = 3, col = 3, x = 0, row_some = 0, col_some = 0, dgm=0, opdgm=0, ans = 1;
    int abc[row][col];

    // matrix value input from user
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &abc[i][j]);
        }
    }
    x = abc[0][0] + abc[0][1] + abc[0][2];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            row_some += abc[i][j];
            col_some += abc[j][i];
            if(i == j){
                dgm += abc[i][j];
            }
            if((i+j) == 2){
                opdgm += abc[i][j];
            }
        }
        // chacking row & col
        if(row_some != x){
            ans = 0;
        }
        row_some = 0;
        if(col_some != x){
            ans = 0;
        }
        col_some = 0;
    }
    
    // chacking the diagonal
    if(dgm != x){
        ans = 0;
    }
    // opposite diagonal
    if(opdgm != x){
        ans = 0;
    }

    // printing the final answer
    if(ans == 1){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}