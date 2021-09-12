#include<stdio.h>
main(){
    int t;
    long n;
    scanf("%d",&t);
    while(t--){
        scanf("%ld",&n);
        long count=0;
        if(n<2)
            count=0;
            else if(n%2==0)
            count=n/2-1;
            else count=n/2;
            printf("%ld\n",count);
    }
}
