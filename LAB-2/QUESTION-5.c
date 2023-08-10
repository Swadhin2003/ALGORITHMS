#include <stdio.h>
void processArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 15 == 0) 
        {
            arr[i] *= 15;
        } 
        else if (arr[i] % 5 == 0) 
        {
            arr[i] *= 5;
        } 
        else if (arr[i] % 3 == 0) 
        {
            arr[i] = 3;
        } 
        else 
        {
            arr[i] = 0;
        }
    }
}
int main() 
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int inputArray[size];
    printf("Enter the elements of the array:");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &inputArray[i]);
    }
    processArray(inputArray, size);
    printf("Processed Array:");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", inputArray[i]);
    }
    printf("\n");
    return 0;
}