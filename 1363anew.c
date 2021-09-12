#include<stdio.h>
main(){
int t,n,x;
scanf("%d",&t);
while(t--){
    scanf("%d%d",&n,&x);
    int a[n],ev=0,od=0,sum=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            ev++;
        else od++;
    }
 if(x%2==1){
        for(int j=1;j<=x;j++){
    for(int i=1;i<=n;i++)
        if(a[i]%2==1)
        sum+=a[i];
 }
 }
 else if(x%2==0){
    for(int j=1;j<=x;j++){
        for(int i=1;i<=n;i++)
            sum+=a[i];
        }
 }
 if(sum%2==1)
    printf("YES\n");
 else
    printf("NO\n");
}
}
