#include<stdio.h>
#include<math.h>
main(){
int t;
scanf("%d",&t);
while(t--){
    long long int n,m,o,x,k;
    scanf("%lld",&n);
    int sum=0;
    for(x=1;x<n;x++){
        for(k=2;k<n;k++){
            sum+=pow(2,k-1)*x;
            if(sum==n)
                o=x;
            break;
        }
    }
    printf("%lld\n",o);
}
}

