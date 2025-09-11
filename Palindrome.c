#include<stdio.h>
void main()
{
int n,a,b=0;
printf("Enter the number:");
scanf("%d",&n);
a=n;
while(n>0){
b=b*10+(n%10);
n=n/10;
}
if(a==b){
    printf("The number is Palindrome");
}else{
printf("The Number is not Palindrome");}
}
