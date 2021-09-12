#include<stdio.h>
main(){
    int t;
    long long int n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        if(n%2050==0){
            n/=2050;
            long long c=0;
            while(n){
                c+=n%10;
                n/=10;
            }
            printf("%lld\n",c);
        }
        else
        printf("-1\n");
    }
}
