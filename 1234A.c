#include<stdio.h>
main(){
    int q,n,sum,avg;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        avg=sum/n;
        if(avg*n>=sum){
        printf("%d\n",avg);
        }
        else if(avg*n<sum){
            avg+=1;
        printf("%d\n",avg);
        }
        sum=0,avg=0;
    }
}
