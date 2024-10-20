#include <stdio.h>

int main() {
    int num, firstDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num >= 10) {
        num = num / 10;
    }

    firstDigit = num;
    printf("The first digit is: %d\n", firstDigit);

    return 0;
}
