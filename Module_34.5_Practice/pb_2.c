#include<stdio.h>
int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    if(inputFile == NULL){
        printf("File is not Found");
        return 0;
    }
    FILE *outputFile = fopen("output.txt", "w");

    int n;
    fscanf(inputFile, "%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fprintf(outputFile, "%d ", i);
    }

    return 0;
}