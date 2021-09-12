#include<stdio.h>   //time limit exceeded
main(){
    int t,i,c;
    long long int n;
    scanf("%d",&t);
    while(t--){
    scanf("%lld",&n);
    c=0;
    for(i=3;i<=n;i++){
        if(n%i==0){
            if(i%2==1)
                c++;
        }
        if(c==1)
        break;
    }
if(c==1)
printf("YES\n");
else
printf("NO\n");
    }
}
