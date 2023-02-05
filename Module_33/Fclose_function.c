#include<stdio.h>
int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    if(inputFile == NULL)
    {
        printf("File is not found");
        return 0;
    }
    FILE *outputFile = fopen("output.txt", "w");


    int n;
    fscanf(inputFile, "%d", &n);
    fprintf(outputFile, "%d", n);

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}