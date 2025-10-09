#include <stdio.h>
int main() {
int a[10], i, j, n=5, val;
for(i=0;i<n;i++) scanf("%d",&a[i]);
scanf("%d",&val);
for(i=0;i<n;i++) if(a[i]==val){for(j=i;j<n-1;j++) a[j]=a[j+1];n--;break;}
for(i=0;i<n;i++) printf("%d ",a[i]);
return 0;
}