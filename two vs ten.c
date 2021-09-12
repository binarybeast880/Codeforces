#include<stdio.h>
main(){
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("\n%d",&n);
        if(n%5!=0){
            printf("-1\n");
        }
        else if(n%10==0){
            printf("0\n");
        }
        else printf("1\n");
    }
}
