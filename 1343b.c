#include<stdio.h>    //Problem
#include<math.h>
main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n%4!=0){
        printf("NO\n");
        }
        else if(n%4==0){
            int a[n];
            for(int i=1;i<=n/2;i++){
                a[i]=pow(2,i);
            }
            for(int i=n/2;i<=n;i++){
                a[i]=1+i;
            }
            printf("YES\n");
            for(int i=1;i<=n;i++){
                printf("%d ",a[i]);
            }
            printf("\n");
        }
    }
}
