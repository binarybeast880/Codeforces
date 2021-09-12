#include<stdio.h>
main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int rem1,rem2,dig=0,count=0,i,j;
        while(n>0){
            rem1=n%10;
            n/=10;
            dig++;
        }
        for(i=0;i<dig;i*=10){
            rem2=n%i;
            n-=rem2;
            count++;
            if(rem2>=1 && rem2<=9)
                break;
        }
        printf("%d\n%d",count,i);
    }
}

