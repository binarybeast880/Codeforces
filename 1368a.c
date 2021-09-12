#include<stdio.h>
main(){
int a,b,n,c=0;
scanf("%d%d%d",&a,&b,&n);
while(a<=n || b<=n){
        if(a>b)
            b+=a;
        else
            a+=b;
    c++;
        }
printf("%d",c-1);
}
