#include <stdio.h>
int main() {
int a[10], i, n=5, pos;
for(i=0;i<n;i++) scanf("%d",&a[i]);
scanf("%d",&pos);
for(i=pos-1;i<n-1;i++) a[i]=a[i+1];
n--;
for(i=0;i<n;i++) printf("%d ",a[i]);
return 0;
}