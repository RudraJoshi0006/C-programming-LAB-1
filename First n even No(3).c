#include<stdio.h>
void main(){
int i,n;
printf("Enter the value of n:");
scanf("%d",&n);
printf("The first %d Even numbers are:\n",n);
for(i=1;i<=n;i++){
printf("%d\n",2*i);
}
}
