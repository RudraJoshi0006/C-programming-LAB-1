#include<stdio.h>
void main(){
int a,b;
printf("Enter the two numbers:");
scanf("%d %d",&a,&b);
if(a>b){
printf("Largest:%d\n",a);
printf("Smallest:%d\n",b);
} else if(b>a){
printf("Largest:%d\n",b);
printf("Smallest:%d\n",a);
}else{
printf("Both Numbers are equal");
}
}
