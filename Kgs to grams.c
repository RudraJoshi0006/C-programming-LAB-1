#include<stdio.h>
void main()
{
float a,b;
printf("Enter the weight in Kilograms:");
scanf("%f",&a);
b=a*1000;
printf("%.2fkgs=%.2fgms\n",a,b);
}
