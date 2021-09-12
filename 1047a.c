#include<stdio.h>
main(){
long long int n;
scanf("%lld",&n);
if((n-2)%3==0){
    printf("1 2 %lld",n-3);
}
else
    printf("1 1 %lld",n-2);
}
