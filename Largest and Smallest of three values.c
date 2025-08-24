#include<stdio.h>
void main(){
int a,b,c;
printf("Enter the three numbers:");
scanf("%d %d %d",&a,&b,&c);

if(a>b){
if(a>c)
printf("Largest:%d\n",a);
else
printf("Largest:%d\n",c);
} else{
if(b>c)
printf("Largest:%d\n",b);
else
printf("Largest:%d\n",c);
}

if(a<b){
if(a<c)
printf("Smallest:%d\n",a);
else
printf("Smallest:%d\n",c);
} else{
if(b<c)
printf("Smallest:%d\n",b);
else
printf("Smallest:%d\n",c);
}


}
