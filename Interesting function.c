#include<stdio.h>
int cal(int a){
int ans=0,temp=1;
for(int i=1;i<=10;i++){
    temp==10;
    ans+=(a/temp);
    return 0;
}
main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int l,r;
        scanf("%d%d",&l,&r);
        printf("%d",cal(r)-cal(l)+r-l);
    }
}
