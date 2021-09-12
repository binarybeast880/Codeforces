#include<stdio.h>
main(){
    int q,i;
long long int a,b,c;
scanf("%d",&q);
for(i=1;i<=q;i++){
    scanf("%lld%lld%lld",&a,&b,&c);
    printf("%lld\n",(a+b+c)/2);
}
return 0;
}
