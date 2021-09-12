#include<stdio.h>
main(){
    int t,n,i,pos;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n],pos=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            if(a[i-1]!=a[i]){
                if(a[i-1]==a[i-2]){
                    pos=i+1;                        //my own code
                }
                else
                    pos=i;
            }
        }
        printf("%d\n",pos);
    }
}
