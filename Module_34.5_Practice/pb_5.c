#include<stdio.h>
int main()  
{
    FILE *inputFile = fopen("input.txt", "r");
    if(inputFile == NULL)
    {
        printf("The file is not found");
        return 0;
    }
    FILE *outputFile = fopen("output.txt", "w");

    int n;
    fscanf(inputFile, "%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
            fprintf(outputFile, " ");  
        }  
        for(int k=1;k<=n;k++)  
        {  
            fprintf(outputFile, "#");  
        }  
        fprintf(outputFile, "\n");  
    }  
    return 0;
}  