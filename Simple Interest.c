#include <stdio.h>

void main() {
    float a,b,c,d;
    printf("Enter Principal amount: ");
    scanf("%f", &a);

    printf("Enter Rate of Interest: ");
    scanf("%f", &b);

    printf("Enter Time (in years): ");
    scanf("%f", &c);
    d= (a * b * c) / 100;
    printf("Simple Interest = %.2f\n", d);

}
