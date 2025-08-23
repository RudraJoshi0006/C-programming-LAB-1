#include<stdio.h>
void main()
{
float a,b;
printf("Enter the Temp in Fahrenheit:");
scanf("%f",&a);
b=(a-32)*5/9;
printf("%.2fF=%.2fC\n",a,b);

}
