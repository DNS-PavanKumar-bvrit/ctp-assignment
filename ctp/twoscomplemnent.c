#include <stdio.h>

int main() {
    int binaryNumber, onesComplement = 0, twosComplement = 0, position = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);

    while (binaryNumber > 0) {
        int bit = binaryNumber % 10;

        if (bit == 0) {
            onesComplement += position;
        }

        binaryNumber /= 10;
        position *= 10;
    }

    int carry = 1;
    position = 1;

    while (onesComplement > 0 || carry > 0) {
        int bit = onesComplement % 10;
        int sum = bit + carry;

        if (sum >= 2) {
            twosComplement += (sum % 2) * position;
            carry = 1;
        } else {
            twosComplement += sum * position;
            carry = 0;
        }

        onesComplement /= 10;
        position *= 10;
    }

    printf("The two's complement of the number is: %d\n", twosComplement);
    
    return 0;
}
