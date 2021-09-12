#include<stdio.h>
main(){
long long int t,a,b,temp;
scanf("%lld",&t);
while(t--){
    scanf("%lld%lld",&a,&b);
    temp=0;
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    if((a-b)%10!=0){
        printf("%lld\n",(a-b)/10+1);
    }
    else
        printf("%lld\n",(a-b)/10);
}
}

