#include<stdio.h>
int main()
{
    int n, prod = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        prod = prod * n % 10;
        n = n / 10;
    }
    printf("Sum of digits: %d", prod);
    return 0;
}