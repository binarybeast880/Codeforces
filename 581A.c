#include<stdio.h>
main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    b=(b-a)/2;
    printf("%d %d\n",a,b);
}
