/*  #include<stdio.h>
main(){
int n,k;
scanf("%d%d",&n,&k);
int a[n],poso=0,pose;
for(int i=1;i<=n;i++){
    if(i%2==1)
        poso++;
        if(poso==k){
            printf("%d\n",i);
        return 0;
        }
}
for(int i=1;i<=n;i++){
    if(i%2==0)
    pose=poso++;
    if(pose==k){
        printf("%d",i);
    return 0;
    }
}
}    */
#include<stdio.h>
main(){
long long int n,k;
scanf("%I64d%I64d",&n,&k);
if(k<=(n+1)/2)
    printf("%I64d",k*2-1);
else
    printf("%I64d",(k-(n+1)/2)*2);
}
