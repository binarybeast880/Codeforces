#include<stdio.h>
main(){
int n,m,a,b;
scanf("%d%d%d%d",&n,&m,&a,&b);
int i=(n%m)*a;
if(m*a<=b)
    printf("%d\n",n*a);
else if(i<b){
    printf("%d",(n/m)*b+i);
}
else
    printf("%d\n",(n/m)*b+b);
}
