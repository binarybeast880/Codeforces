#include<stdio.h>
main(){
    int d1,d2,d3;
    scanf("%d%d%d",&d1,&d2,&d3);
    if((d1+d2+d3<=2*d1+2*d2)&&(d1+d2+d3<=2*d2+2*d3)&&(d1+d2+d3<=2*d1+2*d3))
        printf("%d",d1+d2+d3);
    else if((2*d1+2*d2<d1+d2+d3)&&(2*d1+2*d2<2*d2+2*d3)&&(2*d1+2*d2<2*d1+2*d3))
        printf("%d",2*d1+2*d2);
    else if((2*d2+2*d3<d1+d2+d3)&&(2*d2+2*d3<2*d1+2*d2)&&(2*d2+2*d3<2*d1+2*d3))
    printf("%d",2*d2+2*d3);
    else
        printf("%d",2*d1+2*d3);
}
