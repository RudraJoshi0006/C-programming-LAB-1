#include<stdio.h>
void main(){
int i,n,largest,smallest;
printf("Enter the 10 values:");
scanf("%d",&n);
largest=smallest=n;
for(i=2;i<=10;i++){
scanf("%d",&n);
if(n>largest){
largest=n;
} if(n<smallest){
smallest=n;
}}printf("The largest no is %d\n",largest);
printf("The smallest no is %d\n",smallest);

}
