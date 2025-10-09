#include <stdio.h>
int main() {
int a[10], i, n=5, val, found=0;
for(i=0;i<n;i++) scanf("%d",&a[i]);
scanf("%d",&val);
for(i=0;i<n;i++) if(a[i]==val){found=1;break;}
if(found) printf("Found");
else printf("Not found");
return 0;
}