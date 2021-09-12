#include<stdio.h>
main(){
int a,b,c,d,e,f;
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
int min1,min2,firstcost,secondcost,totalcost;
if(f>e){                     //problem
if(b<c && b<d)
    min1=b;
else if(c<b && c<d)
    min1=c;
else{
    min1=d;
}
firstcost=min1*f;
b-=min1;
c-=min1;
d-=min1;
if(a>d)
secondcost=d*e;
else{
secondcost=a*e;
totalcost=firstcost+secondcost;
}
}
else if(e>f){
        if(a>d)
        min1=d;
else{
    min1=a;
}
a-=min1;
d-=min1;
firstcost=min1*e;
if(b<c && b<d)
    min2=b;
else if(c<b && c<d)
    min2=c;
else
    min2=d;
secondcost=min2*f;
totalcost=firstcost+secondcost;
}
    printf("%d",totalcost);
}
