#include<stdio.h>
main(){
    int t,n,i,j,k,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                k=abs(a[i]-a[j]);
                if(k==a[i])
                    c++;
                k=0;
            }
        }
        if(c>1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        printf("%d\n",c);
        for(i=0;i<c;i++){
            printf("%d ",k);
        }
    }
}
