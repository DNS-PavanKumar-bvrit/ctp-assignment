#include<stdio.h>
#include<math.h>

int main() {
    int n, lastdigit, firstdigit, count = 0, m = 0, originalN;
    scanf("%d", &n);

    // sir, i should extract the lastdigit
    lastdigit = n % 10;

    // i should extract the firstdigit
    // and to not change the n value i am taking
    // temp variable
    int temp = n;
    while (temp >= 10) {
        temp = temp / 10;
    }
    firstdigit = temp;

    /*
    i will subtract first and last digits
    from original number
    then add first digit*the last place
    and last digit*the first place
    */

    // Save the original value of n for later use
    originalN = n;

    // Calculate the number of digits in the number
    temp = n; // Reinitialize temp with original number
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    // Remove the first and last digits from the original number and add the swapped digits
    m = originalN % (int)pow(10, count - 1);  // Removes the first digit
    m = m / 10;  // Removes the last digit

    // Add the swapped digits in their new positions
    m = lastdigit * (int)pow(10, count - 1) + m * 10 + firstdigit;

    printf("%d", m);

    return 0;
}
