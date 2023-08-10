#include<stdio.h>
void A(int a[], int n, int* sec_small, int* sec_large)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j=0; j < n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

            }
        }
    }
    *sec_small = a[1];
    *sec_large = a[n-2];
}
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int array[n];
    printf("Enter elements:",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int sec_small, sec_large;
    A(array, n, &sec_small, &sec_large);
    printf("Second Smallest: %d\n", sec_small);
    printf("Second Largest: %d\n", sec_large);
    return 0;
}