#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
     int sum = 0, temp = i;

        while (temp > 0) {
            int digit = temp % 10;
            int fact = 1;

            for (int j = 1; j <= digit; j++) {
                fact *= j;
            }

            sum += fact;
            temp /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
}