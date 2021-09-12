#include<stdio.h>         //time limit exceeded
main(){
int t;
long long int x,y,n,k;
scanf("%d",&t);
while(t--){
    scanf("%lld%lld%lld",&x,&y,&n);
    long long int c=0;
    for(k=n;k>=1;k--){
        if(k%x==y){
            c=k;
        }
      if(c>0)
        break;
    }
    if(c==0)
    printf("0\n");
    else
        printf("%lld\n",c);
}
}
