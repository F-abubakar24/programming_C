#include <stdio.h>

int main() {
    FILE *inputFile = fopen("input.txt", "r");
    if(inputFile == NULL)
    {
        printf("The file is not found");
    }
    FILE *outputFile = fopen("output.txt", "a");

    int year;
    fscanf(inputFile, "%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        fprintf(outputFile, "%d-->YES\n", year);
    } else {
        fprintf(outputFile, "%d-->NO\n", year);
    }
    return 0;
}
