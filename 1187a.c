#include<stdio.h>
main(){
int test,n,s,t,min;
scanf("%d",&test);
while(test--){
    scanf("%d%d%d",&n,&s,&t);
    if(s<t)
        min=s;
    else
        min=t;
        if(n==s && s==t)
            printf("1\n");
        else
    printf("%d\n",min+1);
}
}
