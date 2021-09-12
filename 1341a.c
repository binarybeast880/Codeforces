//copied

#include<stdio.h>
main(){
int t,n,a,b,c,d;
scanf("%d",&t);
while(t--){
    scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
  if(n*(a+b)<c-d  ||  c+d<n*(a-b))
        printf("No\n");
  else
    printf("Yes\n");
}
}
