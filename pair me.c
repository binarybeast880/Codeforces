#include<stdio.h>
main(){
int t,x,y,z;
scanf("%d",&t);
for(int i=1;i<=t;i++){
    scanf("%d %d %d",&x,&y,&z);
    if((x==y+z)||(y==x+z)||(z==x+y))
    printf("yes\n");
    else printf("no\n");
}
}
