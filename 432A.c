#include<stdio.h>
main(){
    int n,k,c=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(5-a[i]>=k)
            c++;
    }
    int ans=c/3;
    printf("%d",ans);
}
