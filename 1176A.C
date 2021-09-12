#include<stdio.h>
main(){
    int q;
    long long int n;
    scanf("%d",&q);
    while(q--){
        scanf("%lld",&n);
        int k2=0,k3=0,k5=0;
            while(n%2==0){
                n/=2;
                k2++;
            }
            while(n%3==0){
                n/=3;
                k3++;
            }
            while(n%5==0){
                n/=5;
                k5++;
            }
       if(n!=1)
       printf("-1\n");
       else
        printf("%d\n",k2+k3*2+k5*3);
    }
}
