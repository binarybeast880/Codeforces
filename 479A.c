#include<stdio.h>
main(){    //own
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
int m1,m2,m3,m4,m5,m6,d[6],i;
m1=a*b*c;
d[0]=m1;
m2=a+b+c;
d[1]=m2;
m3=a+(b*c);
d[2]=m3;
m4=(a*b)+c;
d[3]=m4;
m5=(a+b)*c;
d[4]=m5;
m6=a*(b+c);
d[5]=m6;
int max=d[0];
for(i=0;i<6;i++){
    if(d[i]>max){
        max=d[i];
    }
}
printf("%d",max);
}
