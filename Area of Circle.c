#include <stdio.h>

void main() {
    float a,b;
    printf("Enter radius of the circle(in meters): ");
    scanf("%f",&a);
    b=(22.00/7.00)*a*a;
    printf("Area of Circle(m^2)= %.2f\n",b);
}
