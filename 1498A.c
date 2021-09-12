#include<stdio.h>
main(){
int t,n,total,gcd,i;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    total=0;
    while(n){                        //having problem
        total+=n%10;
        n/=10;
    }
    if(n%i==0 && total%i==0)
        gcd=i;
    if(gcd>1){
        printf("%d",gcd);
    break;
    }
    else
        n++;
}
}
