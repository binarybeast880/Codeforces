#include<stdio.h>
main(){
    long long int a,b,c,m,n,flag=0;
    scanf("%lld%lld%lld",&a,&b,&c);
    for(int x=-10000;x<=10000;x++){
        for(int y=-10000;y<=10000;y++){
            if(a*x+b*y+c==0){
                m=x;
            n=y;
            flag=1;
            break;
            }            //problm
        }
    }
    if(flag==1)
        printf("%lld %lld",m,n);
    else if(flag==0)
        printf("-1\n");
}
