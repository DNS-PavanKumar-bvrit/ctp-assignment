#include <stdio.h>

int main() {
    int amount, count;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    int notes2000 = amount / 2000;
    amount = amount % 2000;

    int notes500 = amount / 500;
    amount = amount % 500;

    int notes200 = amount / 200;
    amount = amount % 200;

    int notes100 = amount / 100;
    amount = amount % 100;

    int notes50 = amount / 50;
    amount = amount % 50;

    int notes20 = amount / 20;
    amount = amount % 20;

    int notes10 = amount / 10;
    amount = amount % 10;

    int notes5 = amount / 5;
    amount = amount % 5;

    int notes1 = amount;

    printf("The total number of notes is:\n");
    if (notes2000 > 0) printf("%d x 2000\n", notes2000);
    if (notes500 > 0) printf("%d x 500\n", notes500);
    if (notes200 > 0) printf("%d x 200\n", notes200);
    if (notes100 > 0) printf("%d x 100\n", notes100);
    if (notes50 > 0) printf("%d x 50\n", notes50);
    if (notes20 > 0) printf("%d x 20\n", notes20);
    if (notes10 > 0) printf("%d x 10\n", notes10);
    if (notes5 > 0) printf("%d x 5\n", notes5);
    if (notes1 > 0) printf("%d x 1\n", notes1);

    return 0;
}
