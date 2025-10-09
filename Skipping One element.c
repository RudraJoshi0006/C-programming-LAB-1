#include <stdio.h>
int main() {
int a[10], b[5], i;
for(i=0;i<10;i++) scanf("%d",&a[i]);
for(i=0;i<5;i++) b[i]=a[i*2];
for(i=0;i<5;i++) printf("%d ",b[i]);
return 0;
}