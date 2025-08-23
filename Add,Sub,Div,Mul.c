#include<stdio.h>
void main()
{
float a,b;
float Addition,Subtraction,Multiplication,Division;

printf("Enter the two numbers:");
scanf("%f %f",&a,&b);
Addition=a+b;
Subtraction=a-b;
Multiplication=a*b;
Division=a/b;
printf("Add: %.2f+%.2f=%.2f\n",a,b,Addition);
printf("Subtract: %.2f-%.2f=%.2f\n",a,b,Subtraction);
printf("Multiply: %.2f*%.2f=%.2f\n",a,b,Multiplication);
printf("Divide: %.2f/%.2f=%.2f\n",a,b,Division);
}
