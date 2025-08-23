#include <stdio.h>

void main() {
    float a,b,c,d;
    printf("Enter Length of the rectangle(in meters): ");
    scanf("%f",&a);
    printf("Enter Breadth of the rectangle(in meters): ");
    scanf("%f",&b);

    c=a*b;
    d=2*(a+b);
    printf("Area of Rectangle(m^2)= %.2f\n", c);
    printf("Perimeter of Rectangle(m)=%.2f\n",d);
}
