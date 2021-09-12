#include<stdio.h>
main(){
    int t,n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d  %d",&n,&k);
        if(k%2==n%2){
            if(k*k<=n)
                printf("YES\n");
            else printf("NO\n");
        }
        else printf("NO\n");
    }
}
