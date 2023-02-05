#include<stdio.h>

int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    if(inputFile == NULL)
    {
        printf("The File is not Found\n");
        return 0;
    }
    FILE *outputFile = fopen("output.txt", "w");

    int n;
    fscanf(inputFile, "%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(inputFile, "%d", &arr[i]);
        fprintf(outputFile, "%d ", arr[i]);
    }
    return 0;
}