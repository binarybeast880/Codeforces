#include<stdio.h>
main(){
    long int a,b,c,d;
    int i,j,count=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if ( (a==b) &&(b==c)&&(c==d) )
    printf("3");
    else if ( ((a==b) && (b==c)) || ((a==b)&& (b==d)) || ((a==c)&&(c==d))||((b==c)&&(c==d)))
    printf("2");
    else if (((a==b)&&(c==d)) || (( a==c)&&( b==d))||((a==d)&&b==c))
    printf("2");
    else if( ( a==b) || (a==c) ||( a==d)||(b==c) ||(b==d)||(c==d))
    printf("1");
    else
    printf("0");
}
