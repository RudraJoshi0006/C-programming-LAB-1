#include <stdio.h>
int main() {
int n,temp,sum=0,d;
scanf("%d",&n);
temp=n;
while(temp>0) {
d=temp%10;
sum+=d*d*d;
temp=temp/10;
}
if(sum==n) {
printf("Armstrong\n");
} else {
printf("Not Armstrong\n");
}
return 0;
}