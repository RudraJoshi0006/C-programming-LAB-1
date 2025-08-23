#include<stdio.h>
void main()
{
float a,b,c;
printf("Enter amount in Dollars:");
scanf("%f",&a);
b=a*48;
c=b/70;
printf("%.2f$=%.2fPounds\n",a,c);
}
