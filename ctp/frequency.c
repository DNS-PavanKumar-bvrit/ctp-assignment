#include <stdio.h>

int main() {
    int num, digit, temp, count, i;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Frequency of digits in %d:\n", num);
    for (i = 0; i <= 9; i++) {
        temp = num;
        count = 0;

        while (temp > 0) {
            digit = temp % 10;
            if (digit == i) {
                count++;
            }
            temp = temp / 10;
        }

        if (count > 0) {
            printf("Digit %d: %d times\n", i, count);
        }
    }

    return 0;
}
