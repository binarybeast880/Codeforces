#include<stdio.h>
main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x%z==0 && y%z==0){
        printf("%d 0",x/z+y/z);
    }
    else if(x%z !=0 && y%z!=0){
        printf("%d %d",(x+y)/z,y%z);
    }
}