#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
    