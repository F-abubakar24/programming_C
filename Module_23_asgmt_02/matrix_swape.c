#include<stdio.h>
void trnspose(int matrix[10][10], int row, int col);

int main()
{
    int row, col, matrix[10][10];
    row = 3;
    col = 3;
    printf("Enter the element of the matrix: \n");
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    trnspose(matrix, row, col);
    return 0;
}

void trnspose(int matrix[10][10], int row, int col)
{
    int transpose[10][10];

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    printf("\n");
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}