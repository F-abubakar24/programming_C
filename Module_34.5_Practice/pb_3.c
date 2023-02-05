#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    if(inputFile == NULL)
    {
        printf("File is not found");
        return 0;
    }
    FILE *outputFile = fopen("output.txt", "w");

    int t;
    fscanf(inputFile, "%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        fscanf(inputFile, "%d", &n);
        if(n < 0)
        {
            for (int i = n; i <= abs(n); i++)
            {
                fprintf(outputFile, "%d ", i);
            }
            fprintf(outputFile, "\n");
        }
        else if(n > 0)
        {
            for (int i = n; i >= -n; i--)
            {
                fprintf(outputFile, "%d ", i);
            }
            fprintf(outputFile, "\n");
        }
    }

        return 0;
}