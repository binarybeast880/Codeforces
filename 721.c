#include<stdio.h>
main(){
    long int n;
    scanf("%ld",&n);
    int k=0;
    long int temp=n;
    int c=0,dig=0;
    while(n>0){
        int rem=n%10;
        if(temp%rem==0)
            c++;
            n/=10;
            dig++;
    }
    if(c==dig)
    printf("happier");
    else if(c<dig && c>0)
    printf("happy");
    else
        printf("upset");
}
