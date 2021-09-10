#include<stdio.h>
main(){
    int n,e,i;
    scanf("%d",&n);
    int a[n],p[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        p[a[i]]=i+1;
    }
    for(i=1;i<=n;i++){
        printf("%d ",p[i]);
    }
}
