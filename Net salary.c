#include<stdio.h>
void main()
{
float Gross_Salary,b,c,d;
printf("Enter gross salary(In Rupees):");
scanf("%f",&Gross_Salary);
b=0.10*Gross_Salary;
c=0.03*Gross_Salary;
d=Gross_Salary+b-c;
printf("Allowance: %.2f\n",b);
printf("Deduction: %.2f\n",c);
printf("Net Salary: %.2f\n",d);
}
