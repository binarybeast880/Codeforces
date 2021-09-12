#include<stdio.h>
main(){
int t,n;
scanf("%d",&t);
while(t--){
    int cnt=0;
    scanf("%d",&n);
    for(int i=0;i<30;i++){
        if(((n>>i)&1)==1)
            cnt=i;
    }
    printf("%d\n",(1<<cnt)-1);
}
}
