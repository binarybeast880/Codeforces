#include<stdio.h>
main(){
int t;
long long int a,b,k;
scanf("%d",&t);
while(t--){
    scanf("%lld%lld%lld",&a,&b,&k);
    long long int sum=0,suma=0,sumb=0;
    if(k%2==0){
    for(int i=1;i<=k;i+=2){
        suma+=a;
    }
    for(int i=2;i<=k;i+=2){
        sumb-=b;
    }
    sum=suma+sumb;
    }
    else if(k%2==1){
        suma=a*(k-k/2);
        sumb=b*(k/2);
        sum=suma-sumb;
    }
    printf("%lld\n",sum);
}
}
