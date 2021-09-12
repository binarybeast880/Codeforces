#include<stdio.h>
main(){
    int t,c,d,l;
    scanf("%d",&t);                  //wrong code
    while(t--){
        scanf("%d%d%d",&c,&d,&l);
        if(c*4 + d*4==l)
            printf("YES\n");
        else if(d*4==l)
            printf("YES\n");
        else printf("NO\n");
    }
}
