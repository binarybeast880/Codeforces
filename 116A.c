#include <stdio.h>
main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n],k,ans;
    for(int i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    int max=0;
    k=a[0];
    for(int i=0;i<n;i++){
        ans=b[i]-a[i]+k;
        k=ans;
        if(ans>max){
            max=ans;
        }
    }
    printf("%d\n",max);
}