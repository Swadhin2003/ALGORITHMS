#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
void readIntegersFromFile(const char* file_path, int array[], int* n) 
{
    FILE* file = fopen(file_path, "r");
    if (file == NULL) 
    {
        printf("Failed to open the file.\n");
        exit(1);
    }
    *n = 0;
    while ((*n < MAX_SIZE) && (fscanf(file, "%d", &array[*n]) == 1)) 
    {
        (*n)++;
    }
    fclose(file);
}
int findDuplicatesCount(const int array[], int n) 
{
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (array[i] == array[j]) 
            {
                count++;
                break; 
            }
        }
    }
    return count;
}
int findMostRepeatingElement(const int array[], int n) 
{
    int most_repeating_element = array[0];
    int max_count = 1;
    for (int i = 0; i < n; i++) 
    {
        int count = 1;
        for (int j = i + 1; j < n; j++) 
        {
            if (array[i] == array[j]) 
            {
                count++;
            }
        }
        if (count > max_count) 
        {
            max_count = count;
            most_repeating_element = array[i];
        }
    }
    return most_repeating_element;
}
int main() 
{
    int array[MAX_SIZE];
    int n;
    const char* file_path = "C:/Users/KIIT/OneDrive/Desktop/DAA/LAB-1/QUESTION-3.txt";
    readIntegersFromFile(file_path, array, &n);
    int duplicates_count = findDuplicatesCount(array, n);
    int most_repeating_element = findMostRepeatingElement(array, n);
    printf("Total number of duplicate elements:%d\n", duplicates_count);
    printf("Most repeating element:%d\n", most_repeating_element);
    return 0;
}