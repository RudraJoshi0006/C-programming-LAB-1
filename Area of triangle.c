#include <stdio.h>

void main() {
    float a,b,c;
    printf("Enter Length of the triangle(in meters): ");
    scanf("%f",&a);
    printf("Enter height of the triangle(in meters): ");
    scanf("%f",&b);

    c=a*b*0.5;
    printf("Area of Triangle(m^2)= %.2f\n", c);
}
