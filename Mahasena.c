#include<stdio.h>
main(){
    int t,n,ev=0,od=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        if(n%2==0){
            ev++;
        }
        else{
            od++;
        }
    }
    if(ev>od){
        printf("READY FOR BATTLE\n");
    }
    else printf("NOT READY\n");
}

