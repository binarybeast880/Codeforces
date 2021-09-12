#include<stdio.h>
main(){
    int t,i;
    scanf("%d",&t);
    long long a,b,n;
    while(t--){
        scanf("%lld%lld%lld",&a,&b,&n);
        for(i=1;i<=n;i++){
            if(i%2!=0)
                a=a*2;
            else
                b=b*2;}
            if(a>b)
                printf("%lld\n",a/b);
            else
                printf("%lld\n",b/a);
    }
}
