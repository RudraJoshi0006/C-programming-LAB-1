#include<stdio.h>
void main(){
float a,b,c;
printf("Enter the gross sales:");
scanf("%f",&a);
if(a>20000){
b=0.15*a;
}else if(a>10000){
b=0.10*a;
}else{
b=0.05*a;
}

c=a-b;

printf("Net Sales:%.2f\n",c);
}
