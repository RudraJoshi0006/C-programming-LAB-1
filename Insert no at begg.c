#include <stdio.h>
int main() {
int a[10], i, n=5, val;
for(i=0;i<n;i++) scanf("%d",&a[i]);
scanf("%d",&val);
for(i=n;i>0;i--) a[i]=a[i-1];
a[0]=val;
n++;
for(i=0;i<n;i++) printf("%d ",a[i]);
return 0;
}