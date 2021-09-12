#include<stdio.h>
main(){
    int t,n,b[6]={100,50,10,5,2,1};
    scanf("%d",&t);
        while(t--){
            scanf("%d",&n);
            int l=0;
            for(int i=0;i<6;i++){
        l=l+n/b[i];
        n=n%b[i];
    }
    printf("%d\n",l);
}}
