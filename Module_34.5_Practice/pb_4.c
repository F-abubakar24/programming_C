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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(inputFile, "%d", &arr[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arr[i] % 10;
    }
    fprintf(outputFile, "%d\n", ans);

    return 0;
}