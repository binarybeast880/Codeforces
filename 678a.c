#include<stdio.h>
main(){
long long int n,k;
scanf("%lld%lld",&n,&k);
printf("%lld",n+k-(n%k));
}
