#include <stdio.h>
int main() {
int a[10], i, n=5, pos, val;
for(i=0;i<n;i++) scanf("%d",&a[i]);
scanf("%d%d",&pos,&val);
for(i=n;i>=pos;i--) a[i]=a[i-1];
a[pos-1]=val;
n++;
for(i=0;i<n;i++) printf("%d ",a[i]);
return 0;
}