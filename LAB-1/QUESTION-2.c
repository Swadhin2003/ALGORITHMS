#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Array size should be positive.\n");
        return 0;
    }
    int arr[n];
    printf("Enter the elements of the array:");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++) 
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    printf("Prefix Sum of the Array:");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", prefixSum[i]);
    }
    printf("\n");
    return 0;
}