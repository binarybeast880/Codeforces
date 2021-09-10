#include<stdio.h>
main(){
    int n,m,a,b,c=0;
    scanf("%d%d",&n,&m);
    for(a=0;a<=n;a++){
        for(b=0;b<=m;b++){
            if(a*a+b==n && b*b+a==m)
                c++;
        }
    }
    printf("%d",c);
}
