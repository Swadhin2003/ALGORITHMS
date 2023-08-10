#include <stdio.h>
#include <time.h>
void reverseArray(int arr[], int size) 
{
    int start = 0;
    int end = size - 1;
    while (start < end) 
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() 
{
    int size1, size2, size3;
    printf("Enter the size of the first array:");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d elements for the first array:", size1);
    for (int i = 0; i < size1; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second array:");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter %d elements for the second array:", size2);
    for (int i = 0; i < size2; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    printf("Enter the size of the third array:");
    scanf("%d", &size3);
    int arr3[size3];
    printf("Enter %d elements for the third array:", size3);
    for (int i = 0; i < size3; i++) 
    {
        scanf("%d", &arr3[i]);
    }
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    reverseArray(arr1, size1);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to reverse the first array:%f seconds\n", cpu_time_used);
    start = clock();
    reverseArray(arr2, size2);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to reverse the second array:%f seconds\n", cpu_time_used);
    start = clock();
    reverseArray(arr3, size3);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to reverse the third array:%f seconds\n", cpu_time_used);
    printf("Reversed first array:");
    for (int i = 0; i < size1; i++) 
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("Reversed second array:");
    for (int i = 0; i < size2; i++) 
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    printf("Reversed third array:");
    for (int i = 0; i < size3; i++) 
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}
