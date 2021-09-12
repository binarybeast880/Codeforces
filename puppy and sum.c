#include <stdio.h>
int main(){
    int t,n,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&d,&n);
        while(d--){
                int sum=0;
            for(int i=1;i<=n;i++){
                sum=sum+i;
            }
            n=sum;
        }
        printf("%d\n",n);
    }
}
