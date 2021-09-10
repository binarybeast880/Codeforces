#include<stdio.h>
main(){
int n,i,count=0;
scanf("%d",&n);
int p[n],q[n];
for(i=0;i<n;i++){
    scanf("%d %d",&p[i],&q[i]);
if(q[i]-p[i]>=2)
    count++;
}
printf("%d",count);
}
