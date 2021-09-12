#include<stdio.h>
main(){
long long int t,l,r,i;
scanf("%lld",&t);
while(t--){
    scanf("%lld%lld",&l,&r);
    for(i=l;i<r;i++){
        if(r%i==0){
            printf("%lld %lld\n",i,r);
            break;
        }
    }
}
}
