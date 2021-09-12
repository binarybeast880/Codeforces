#include<stdio.h>
main(){
    int t,n,k,i,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int pos1=0;
        int a[n];
        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&k);
        int temp=0;
        pos1=0;
        pos1=a[k],temp=0;
        for(i=1;i<=n;i++){
            for(j=1+i;j<=n;j++){
                if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        int pos2=0;
        for(i=1;i<=n;i++){
            if(a[i]==pos1)
                pos2=i;
        }
        printf("%d\n",pos2);
    }
}

