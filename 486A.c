#include<stdio.h>
#include<math.h>
main(){
    long long int n,ans;
    scanf("%lld",&n);
    if(n%2==0)
        ans=n/2;
    else
        ans=(((n/2)+1)*(-1));
    printf("%lld",ans);
}

