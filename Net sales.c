#include<stdio.h>
void main()
{
float Gross_Sales,b,c;
printf("Enter gross sales(In Rupees):");
scanf("%f",&Gross_Sales);
b=0.10*Gross_Sales;
c=Gross_Sales-b;
printf("Net Sales: %.2f\n",c);
}
