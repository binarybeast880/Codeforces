#include<stdio.h>
main(){
int t,n;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    int a[n],c=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1])
            c++;
    }
    int f=(n*(n-1)/2);
    if(c<=f)
        printf("YES\n");
        else printf("NO\n");
}
}
