#include <stdio.h>
void EXCHANGE(int *p, int *q) 
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
void ROTATE_RIGHT(int *p1, int p2) 
{
    int i;
    for (i = 0; i < p2 - 1; i++) 
    {
        EXCHANGE(p1 + i, p1 + i + 1);
    }
}
int main() 
{
    int n, p2;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Invalid size of the array.\n");
        return 1;
    }
    int array[n];
    printf("Enter %d elements of the array:", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the number of elements to be rotated (p2):");
    scanf("%d", &p2);
    if (p2 < 0 || p2 > n) 
    {
        printf("Invalid number of elements to be rotated.\n");
        return 1;
    }
    ROTATE_RIGHT(array, p2);
    printf("Array after right rotation of the first %d elements by 1 position:", p2);
    for (int i = 0; i < n; i++) 
    {
        printf("%d", array[i]);
    }
    printf("\n");
    return 0;
}