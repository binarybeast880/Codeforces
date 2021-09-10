#include<stdio.h>
main(){
    int n,c=0,i=1,m=1;
    scanf("%d",&n);
    while(n>=m){
        m=((i*i)+i)/2;
        if(m>n)
            break;
        n-=m;
        c++;
        i++;
    }
    printf("%d",c);
}



