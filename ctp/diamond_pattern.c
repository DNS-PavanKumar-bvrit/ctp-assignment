#include <stdio.h>

void main() {
    int i, j, k , height;

    printf("Enter the height of the diamond: ");
    scanf("%d", &height);
    for (i = 0; i < height; i++) {
        for (j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = height - 2; i >= 0; i--) {
        for (j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

