#include <stdio.h>
int main() {
int a[10], i, n;
scanf("%d",&n);
for(i=0;i<10;i++) scanf("%d",&a[i]);
for(i=9;i>=n;i--) a[i]=a[i-n];
for(i=0;i<n;i++) a[i]=0;
for(i=0;i<10;i++) printf("%d ",a[i]);
return 0;
}