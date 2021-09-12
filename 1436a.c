#include<stdio.h>
main(){
int t,n,m;
scanf("%d",&t);
while(t--){
    scanf("%d%d",&n,&m);
    int a[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(sum==m)
        printf("YES\n");
    else
        printf("NO\n");
}


}
