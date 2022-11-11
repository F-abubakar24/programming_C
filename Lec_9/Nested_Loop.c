/* #include<stdio.h>
int main()
{
    int i = 0;
    while(i<3){
        int j = 0;
        while(j<5){
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
} */

// ==========================================================
// ==========================================================

/* #include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 0; i < x;i++)
    {
        for (int j = 0; j <= i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i <= x; i++){
        printf("* ");
    }
    printf("\n");

        return 0;
} */

// ==========================================================
// ==========================================================

/* #include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++, k = 0) {
      for (space = 1; space <= rows - i; space++) {
         printf("  ");
      }
      while (k != ((2 * i) - 1)) {
         printf("* ");
         k++;
      }
      printf("\n");
   }
   return 0;
} */

// ==========================================================
// ==========================================================

/* #include<stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    for (int i = 0; i <= x;i++){
        printf("#");
    }
    printf("\n");

    for (int i = 1; i <= (x - 2);i++){
        printf("#");
        for (int j = 1; j <= (x-1);j++){
            printf(" ");
        }
        printf("#\n");
    }

    for (int i = 0; i <= x; i++){
        printf("#");
    }
    printf("\n");
        return 0;
} */


// ==========================================================
// ==========================================================

                            // Hollow Right angle Triangle

/* #include<stdio.h>
int main()
{
   int rows_No;
   scanf("%d", &rows_No);
   
   for (int row = 1; row <= rows_No; row++)
   {
      for (int colNo = 1; colNo <= row; colNo++)
      {
         if((colNo == 1) || (row == rows_No) || (colNo== row)){
            printf("* ");
         }else{
            printf("  ");
         }
      }
      printf("\n");
   }
   printf("\n");

   return 0;
} */


// ==========================================================
// ==========================================================
                            // Stdunt marks avarage;
/* #include<stdio.h>
int main()
{
    int students, subjects;
    printf("How many Students & Subjects: ");
    scanf("%d %d", &students, &subjects);

    for (int i = 1; i <= students; i++){
        printf("Student No-%d: ", i);
        float sum=0, avg=0, marks=0;
        for (int j = 1; j <= subjects; j++){
            scanf("%f", &marks);
            sum += marks;
        }
        avg = sum / subjects;
        printf("%f\n", avg);
    }

    return 0;
} */
