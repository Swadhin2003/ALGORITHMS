#include <stdio.h>
int gcd(int a, int b) 
{
    if (b == 0)
    return a;
    return gcd(b, a % b);
}
int main(int argc, char *argv[]) 
{
    FILE *source = fopen("inQUESTION-2.txt", "r");
    FILE *destination = fopen("outQUESTION-2.txt", "w");
    if (source == NULL || destination == NULL) 
    {
        printf("Error opening files.\n");
        return 1;
    }
    int num1, num2;
    while (fscanf(source, "%d %d", &num1, &num2) == 2) 
    {
        int result = gcd(num1, num2);
        fprintf(destination, "The GCD of %d and %d is %d\n", num1, num2, result);
    }
    fclose(source);
    fclose(destination);
    printf("GCD values are stored in the output file.\n");
    return 0;
}