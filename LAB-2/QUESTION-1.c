#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void decimalToBinary(int num, FILE *outputFile) 
{
    if (num > 0) 
    {
        decimalToBinary(num / 2, outputFile);
        fprintf(outputFile, "%d", num % 2);
    }
}
int main() 
{
    clock_t start, stop;
    double time;
    start = clock();
    int n;
    printf("Enter the value of 'n':");
    scanf("%d", &n);
    FILE *inputFile = fopen("inQUESTION-1.txt", "r");
    FILE *outputFile = fopen("outQUESTION-1.txt", "w");
    if (inputFile == NULL || outputFile == NULL) 
    {
        printf("Error opening files");
        return 1;
    }
    for (int i = 0; i < n; i++) 
    {
        int decimalNum;
        fscanf(inputFile, "%d", &decimalNum);
        decimalToBinary(decimalNum, outputFile);
        fprintf(outputFile, "\n");
    }
    fclose(inputFile);
    fclose(outputFile);
    stop = clock();
    time = (double)(stop - start) / CLOCKS_PER_SEC;
    printf("Binary values converted and stored.\n");
    printf("Time taken:%f seconds\n", time);
    return 0;
}