#include<stdio.h>
void main()
{
float a,b,c,d;
printf("Enter the value in bytes:");
scanf("%f",&a);
b=a/1024;
c=b/1024;
d=c/1024;
printf("%.2fBytes=%.2fKB\n",a,b);
printf("%.2fBytes=%.2fMB\n",a,c);
printf("%.2fBytes=%.2fGB\n",a,d);

}
