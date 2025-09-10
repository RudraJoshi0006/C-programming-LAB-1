#include <stdio.h>

void main() {
int i, num, positive = 0, negative = 0, zeros = 0;

    printf("Enter 10 numbers:\n");

    for (i = 1; i <= 10; i++) {
        scanf("%d", &num);

        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else {
            zeros++;
        }
    }

    printf("\nCount of positive numbers = %d\n", positive);
    printf("Count of negative numbers = %d\n", negative);
    printf("Count of zeros = %d\n", zeros);
}
