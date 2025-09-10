#include<stdio.h>
void main(){
int i,a,sum=0;
float mean;
printf("Enter the 10 values:");
for(i=1;i<=10;i++){
scanf("%d",&a);
sum+=a;
}
mean=sum/10.0;
printf("Sum:%d\n",sum);
printf("Mean:%.2f\n",mean);
}
