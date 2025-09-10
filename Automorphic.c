#include <stdio.h>
#include <math.h>
int main() {
int n,sq,temp,pow=1;
scanf("%d",&n);
sq=n*n;
temp=n;
while(temp>0) {
pow*=10;
temp/=10;
}
if(sq%pow==n) {
printf("Automorphic\n");
} else {
printf("Not Automorphic\n");
}
return 0;
}
