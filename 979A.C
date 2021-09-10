#include<stdio.h>
main(){
long long int n;
scanf("%lld",&n);
if(n==0){
    printf("0\n");
return 0;
}
else if((n+1)%2==0){
    printf("%lld\n",(n+1)/2);
}
else printf("%lld\n",n+1);
}
