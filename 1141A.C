#include<stdio.h>
main(){
long long int n,m;
int c=0,flag=0;
scanf("%lld%lld",&n,&m);
if(m%n!=0){
    printf("-1\n");
    return 0;
}
long long int d=m/n;
while(d%2==0){
    d/=2;
    c++;
}
while(d%3==0){
    d/=3;
    c++;
}
if(d!=1)
    printf("-1");
else
    printf("%d",c);
}
