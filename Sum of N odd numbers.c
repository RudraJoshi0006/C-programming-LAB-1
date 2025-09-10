#include<stdio.h>
void main(){
int n,sum=0;
printf("Enter the value of n:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
int odd=2*i-1;
sum += odd;
}

printf("The sum of first %d odd numbers is:%d",n,sum);
}
