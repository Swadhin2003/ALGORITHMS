#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int linearSearch(int arr[], int size, int target) 
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) 
        {
            return i;
        }
    }
    return -1;
}
void reverseArray(int arr[], int size) 
{
    for (int i = 0; i < size / 2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
int main() 
{
    int sizes[] = {5,7,3};
    clock_t start_time, end_time;
    for (int i = 0; i < 3; i++) 
    {
        int size = sizes[i];
        int arr[size];
        printf("Enter %d elements for array:", size);
        for (int j = 0; j < size; j++) 
        {
            scanf("%d", &arr[j]);
        }
        int target;
        printf("Enter the element to search:");
        scanf("%d", &target);
        start_time = clock();
        int result = linearSearch(arr, size, target);
        end_time = clock();
        if (result != -1) 
        {
            printf("Element found at index %d.\n", result);
        } 
        else 
        {
            printf("Element not found.\n");
        }
        double search_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
        printf("Time taken for linear search:%lf seconds\n", search_time);
        start_time = clock();
        reverseArray(arr, size);
        end_time = clock();
        double reverse_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
        printf("Time taken for array reversal:%lf seconds\n", reverse_time);
    }
    return 0;
}