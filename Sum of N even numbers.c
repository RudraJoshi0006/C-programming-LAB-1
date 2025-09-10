#include<stdio.h>
void main(){
int n,sum=0;
printf("Enter the value of n:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
int even=2*i;
sum += even;
}

printf("The sum of first %d even numbers is:%d",n,sum);
}
