#include<stdio.h>
main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int count=0;
        for(int i=0;i<n;i++){
            if((a[i]*a[i+1]==a[i])||(a[i]*a[i+1])==a[i+1])
                count++;
        }                                         //problem
        if(count==n-1)
            printf("yes\n");
        else
        printf("no\n");
    }
}
