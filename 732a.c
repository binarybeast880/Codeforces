#include<stdio.h>
main(){
int k,x,r;
scanf("%d%d",&k,&r);
for(int x=1;x<=10;x++){
    if(k*x%10==r){
printf("%d\n",x);
return 0;
    }
}
}
