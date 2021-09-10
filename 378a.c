#include<stdio.h>
#include<math.h>
main(){
int a,b,posa,posb,awin=0,draw=0,bwin=0;
scanf("%d%d",&a,&b);
for(int i=1;i<=6;i++){
    if(i==a)
        posa=i;
    if(i==b)
        posb=i;
}
for(int i=1;i<=6;i++){
    if(abs(posa-i)<abs(posb-i))
        awin++;
    else if(abs(posa-i)==abs(posb-i))
        draw++;
    else
        bwin++;
}
printf("%d %d %d",awin,draw,bwin);
}
