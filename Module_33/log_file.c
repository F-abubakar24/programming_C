#include<stdio.h>

int main()
{
    FILE *logFile = fopen("log.txt", "a");
    FILE *inputFile = fopen("habijabi.txt", "r");
    if(inputFile == NULL)
    {
        fprintf(logFile, "Input file not found at 12:45 AM\n");
    }
    // fprintf(logFile, "Hello at 12:00 AM\n");
    return 0;
}