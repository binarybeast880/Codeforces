#include<stdio.h>
main(){
int t;
scanf("%d",&t);
long long int s,ans,rem;
while(t--){
    scanf("%lld",&s);
    ans=0;
    while(s>=10){
            rem=s%10;
        ans+=s-rem;
        s=s%10+s/10;
    }
    ans+=s;
    printf("%lld\n",ans);
}
}
