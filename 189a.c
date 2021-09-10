#include<stdio.h>
main(){
int n,a,b,c,count=0;
scanf("%d%d%d%d",&n,&a,&b,&c);
if(a+b+c==n)
    count+=3;
if(a+b==n)
    count+=2;
if(a+c==n)
    count+=2;
if(b+c==n)
    count+=2;
printf("%d",count);
}
