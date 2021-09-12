#include<stdio.h>
#include<math.h>
main(){
    int t,a,b;
    scanf("%d",&t);
    while(t--){
            int sum=0;
        scanf("%d%d",&a,&b);
        for(int i=0;i<=b+1;i+=2){
            sum=sum+pow(b,i);
        }
        if(sum==a)
            printf("YES\n");
        else printf("NO\n");
    }
}
