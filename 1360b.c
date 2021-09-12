#include<stdio.h>
main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        int temp=0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        int min=a[n]-a[n-1];
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(a[j]-a[i]<min)
                    min=a[j]-a[i];
            }
        }
        printf("%d\n",min);
    }
}
