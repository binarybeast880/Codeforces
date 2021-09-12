#include<stdio.h>
main(){
    int t,a,b,c,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(((a>c||a>d)||(b>c||b>d))&&((c>a||c>b)||(d>a||d>b)))
            printf("YES\n");
        else
            printf("NO\n");
    }
}
