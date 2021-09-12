#include<stdio.h>
main(){
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        if(a<b){
            if(a<(a+b)/3)
            printf("%d\n",a);
            else
            printf("%d\n",(a+b)/3);
        }
        else if(b<a){
            if(b<(a+b)/3)
            printf("%d\n",b);
            else
            printf("%d\n",(a+b)/3);
        }
        else if(b==a){
            printf("%d\n",(a+b)/3);
        }
    }
}