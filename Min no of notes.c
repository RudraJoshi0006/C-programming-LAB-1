#include<stdio.h>
void main(){
int a[]={500,200,100,50,20,10,5,2,1};
int i,c[9]={0},amount;
 printf("Enter the amount:");
 scanf("%d",&amount);

 for(i=0;i<9;i++){
 if(amount>=a[i]){
c[i]=amount/a[i];
amount= amount%a[i];
 }

 }
 printf("The number of notes required:");
 for(i=0;i<9;i++){
 if(c[i]>0)
printf("%d X %d\n",a[i],c[i]);}
}
