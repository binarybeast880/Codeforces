#include<stdio.h>
main(){
    int t,n,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&x);
        int a[n];
        for(int i=0;i<n;i++){      //problem
            scanf("%d",&a[i]);
        }
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0)
            even++;
            else if(a[i]%2==1)
            odd++;
        }
        int sum=0;
        for(int i=1;i<=odd && i<=x;i+=2){
            sum+=a[i];
        }
        if(sum%2==1)
        printf("Yes\n");
        else
        printf("No\n");
    }
}
