#include<stdio.h>
main(){
    int n,sum=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>0)
            sum+=a[i];
        else if(sum>0)
            sum--;
        else
            c++;
    }
    printf("%d",c);
}

