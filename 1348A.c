#include<stdio.h>
#include<math.h>
main(){
    int t,n,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int sum=0;
        for(i=1;i<=n/2;i++){
            sum+=pow(2,i);
        }
        printf("%d\n",sum);
    }
}
