#include<stdio.h>
main(){
int t,i,j,n,l,r,c;
scanf("%d",&t);
while(t--){
    scanf("%d%d%d",&n,&l,&r);
    long long int a[n];
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    c=0;
    for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
            if(a[i]+a[j]>=l && a[i]+a[j]<=r){
                c++;
            }
        }
    }
    printf("%d\n",c);
}
}
