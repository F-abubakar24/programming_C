#include<stdio.h>
#include<stdbool.h>


void printCell(int a[4][4], int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("   ");
        for (int j = 1; j <= n; j++)
        {
            if(a[i][j] == -1){
                printf(" ");
            }else if(a[i][j] == 1){
                printf("X");
            }else if(a[i][j] == 2){
                printf("O");
            }

            if(j < n) printf("   |   ");
        }
        printf("\n");
        if(i < n) printf("------------------------");
        printf("\n");
    }
}


int isWin(int a[4][4], int n)
{
    // matching Row
    for (int i = 1; i <= n; i++)
    {
        if(a[i][1] == a[i][2] && a[i][2] == a[i][3] && a[i][1] != -1)
        {
            return a[i][1];
        }
    }

    // matching Collum
    for (int j = 1; j <= n; j++)
    {
        if(a[1][j] == a[2][j] && a[2][j] == a[3][j] && a[1][j] != -1)
        {
            return a[1][j];
        }
    }

    // Left to Right Corner
    if(a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[1][1] != -1)
    {
        return a[1][1];
    }

    // Right to Left Corner
    if(a[1][3] == a[2][2] && a[2][2] == a[3][1] && a[1][3] != -1)
    {
        return a[1][1];
    }
    return -1;
}


int main()
{
    int n = 3;
    int a[4][4];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = -1;
        }
    }
    printf("\n");
    printCell(a, n);

    bool player1 = true;
    bool player2 = false;
    while (true)
    {
        if(player1)
        {
            int r, c;
            Flag:
            printf("Player 1 Turn (X), Enter Row and Column : ");
            scanf("%d %d", &r, &c);
            if(a[r][c] != -1)
            {
                printf("Alrady fill UP");
                goto Flag;
            }
            a[r][c] = 1;
            player1 = false;
            player2 = true;
        }
        else
        {
            int r, c;
            Flag2:
            printf("Player 2 Turn (O), Enter Row and Column : ");
            scanf("%d %d", &r, &c);
            if(a[r][c] != -1)
            {
                printf(" --> Alrady fill UP\n");
                goto Flag2;
            }
            a[r][c] = 2;
            player1 = true;
            player2 = false;
        }


        if(isWin(a,n) == 1)
        {
            printf("========------>\n");
            printf("Player 1 Won!\n");
            printf("========------>\n");
            printCell(a, n);
            break;
        }else if(isWin(a,n) == 2)
        {
            printf("========------>\n");
            printf("Player 2 Won!\n");
            printf("========------>\n");
            printCell(a, n);
            break;
        }
        printCell(a, n);
    }
    return 0;
}