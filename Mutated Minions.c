#include <stdio.h>
main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            int q=a[i]+k;
            if(q%7==0)
                c++;
        }
        printf("%d\n",c);
        c=0;
    }
}
