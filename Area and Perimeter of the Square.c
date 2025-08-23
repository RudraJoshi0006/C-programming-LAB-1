#include <stdio.h>

void main() {
    float a,b,c;
    printf("Enter Length of the square(in meters): ");
    scanf("%f",&a);

    b=a*a;
    c=4*a;
    printf("Area of the square(m^2)= %.2f\n", b);
    printf("Perimeter of the Square(m)=%.2f\n",c);
}
