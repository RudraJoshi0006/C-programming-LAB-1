#include<stdio.h>
void main()
{
float a,b;
printf("Enter the weight in Grams:");
scanf("%f",&a);
b=a/1000;
printf("%.2fgms=%.2fkgs\n",a,b);
}
