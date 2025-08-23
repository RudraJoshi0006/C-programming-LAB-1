#include<stdio.h>
void main(){
int a,b,c;
printf("Enter Value1:\n");
scanf("%d",&a);
printf("Enter Value2:\n");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("After Swapping:\n");
printf("a=%d\nb=%d\n",a,b);

}
