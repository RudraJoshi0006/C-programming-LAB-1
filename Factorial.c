#include<stdio.h>
void main(){
int n,i;
int fact=1;

printf("Enter the Number:");
scanf("%d",&n);

if(n<0){
printf("Factorial of a negative number isn't possible");
} else{
for(i=1;i<=n;i++){
fact*=i;
}
printf("Factorial of %d is:%d",n,fact);
}

}

