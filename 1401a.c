#include<stdio.h>
main(){
int t,n,k;
scanf("%d",&t);
while(t--){
    scanf("%d%d",&n,&k);
    if(k>n)
        printf("%d\n",k-n);
    else if(n%2==k%2)
        printf("0\n");
   else printf("1\n");
}
}
