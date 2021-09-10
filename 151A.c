#include<stdio.h>
main(){
    int n,k,l,c,d,p,nl,np,ans;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int drink=k*l;
    int toast=drink/nl;  //my own
    int limes=c*d;
    int salt=p/np;
    if(toast<limes && toast<salt)
        ans=toast/n;
    else if(limes<toast && limes<salt)
        ans=limes/n;
    else
        ans=salt/n;
    printf("%d",ans);
}
