#include<stdio.h>
void main(){
float a,b,c,d;
printf("Enter the gross salary:");
scanf("%f",&a);
if(a>10000){
b=0.10*a;
c=0.03*a;
}else if(a>5000){
b=0.07*a;
c=0.02*a;
}else{
b=0;
c=0;
}

d=a+b-c;

printf("Net Salary:%.2f\n",d);
}
