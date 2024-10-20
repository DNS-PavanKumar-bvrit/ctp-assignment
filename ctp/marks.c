#include <stdio.h>

int main() {
    float physics, chemistry, biology, math, computer, total, percentage;

    printf("Enter marks for Physics: ");
    scanf("%f", &physics);

    printf("Enter marks for Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter marks for Biology: ");
    scanf("%f", &biology);

    printf("Enter marks for Mathematics: ");
    scanf("%f", &math);

    printf("Enter marks for Computer: ");
    scanf("%f", &computer);

    total = physics + chemistry + biology + math + computer;
    percentage = (total / 500) * 100;

    printf("Percentage = %f\n", percentage);

    if (percentage >= 90) {
        printf("Grade A\n");
    } else if (percentage >= 80) {
        printf("Grade B\n");
    } else if (percentage >= 70) {
        printf("Grade C\n");
    } else if (percentage >= 60) {
        printf("Grade D\n");
    } else if (percentage >= 40) {
        printf("Grade E\n");
    } else {
        printf("Grade F\n");
    }

    return 0;
}
