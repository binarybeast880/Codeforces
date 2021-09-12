#include<stdio.h> //copied bt got it
main(){
long long int n,k;
scanf("%lld %lld",&n,&k);
long long int l=-1,r=n+1,m;
while(r-l>1){
    m=(l+r)/2;
    if((n-m)*(n-m+1)/2-m>k)
        l=m;
    else
        r=m;
}
printf("%lld",r);
}

