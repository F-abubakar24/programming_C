#include<stdio.h>
int main()
{
    int row, col, ans = 1;
    scanf("%d %d", &row, &col);
    int storage[row][col];

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            scanf("%d", &storage[i][j]);
        }
    }

    if(row == col){
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if(i == j){
                    if(storage[i][j] != 1){
                        ans = 0;
                    }

                }else if(storage[i][j] != 0){
                    ans = 0;
                }
            }
        }

        if(ans == 1){
            printf("Identity");
        }else{
            printf("Not Identity");
        }


    }else{
        printf("Not Identity");
    }


        return 0;
}