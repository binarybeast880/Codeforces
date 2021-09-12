#include<stdio.h>
main(){
int t;
long long int p,q,x,ans;
scanf("%d",&t);
while(t--){
    scanf("%lld%lld",&p,&q);
    if(p%q!=0)
        ans=p;
    else
       ans=p/4;
    printf("%lld\n",ans);
}
}
