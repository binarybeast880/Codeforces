#include<stdio.h>  //wrong on test 3
#include<math.h>
main(){
int a,m,flag=0,k,ans;
scanf("%d%d",&a,&m);
for(k=1;k<=100;k++){
	ans=pow(2,k);
    if((a*ans)%m==0)
        flag=1;
    break;
    ans=0;
}
if(flag==1)
    printf("Yes\n");
else
    printf("No\n");
}
