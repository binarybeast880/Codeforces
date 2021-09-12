#include<stdio.h>
main(){
    int t,h,x,y,c;
    scanf("%d",&t);
    while(t--){
    scanf("%d%d%d%d",&h,&x,&y,&c);
    if((x+y/2)*h<=c)
        printf("yes\n");
    else
        printf("no\n");
}
}
