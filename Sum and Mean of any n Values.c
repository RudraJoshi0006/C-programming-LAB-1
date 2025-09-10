#include<stdio.h>
void main(){
int n,i,a;
float mean,sum=0;
printf("Enter the number of values:");
scanf("%d",&n);
printf("Enter the %d values:",n);
for(i=1;i<=n;i++){
scanf("%d",&a);
sum+=a;
}
mean=sum/n;
printf("Sum:%.2f\n",sum);
printf("Mean:%.2f\n",mean);
}
