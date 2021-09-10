#include<stdio.h>
main(){
    int n,t=0,k,i;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++){
        t+=5*i;
        if(t>240-k){
            printf("%d",i-1);
            return 0;
        }
    }
    printf("%d",i-1);
}
