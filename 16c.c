#include<stdio.h>     //wrong answer on test 6
main(){
long long int a,b,x,y;
scanf("%lld%lld%lld%lld",&a,&b,&x,&y);
if(a==1 && b==1)
    printf("0 0");
else if((a<x || a<y )&&( b<x || b<y))
    printf("0 0");
else if(a*y == b*x)
    printf("%lld %lld",a,b);
else if(a*y!=b*x && a>b)
    printf("%lld %lld",a,a*y/x);
else if(b>a)
        printf("%lld %lld",a,a*x/y);

}
