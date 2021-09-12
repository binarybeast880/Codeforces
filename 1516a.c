#include<stdio.h>
main(){
int t,n,k;
scanf("%d",&t);
while(t--){
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c=0;
    for(int i=0;i<n;i++){
        a[i]-=1;
        a[n-i-1]+=1;
        c++;
        if(c==k)
            break;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
}

