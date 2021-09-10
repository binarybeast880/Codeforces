#include<stdio.h>
main(){
    int n,s,i;
    scanf("%d",&n);
    int a[n],sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++){
            sum=sum+a[i];
        if(max<a[i])
            max=a[i];
    }
    s=max*n-sum;
    printf("%d",s);
}

