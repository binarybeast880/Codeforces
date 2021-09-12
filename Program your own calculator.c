#include<stdio.h>
main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    char ch;
    scanf("%c",&ch);
    if(ch==+)
        printf("%d",a+b);
    else if(ch=='-')
        printf("%d",a-b);
    else if(ch=='*')
        printf("%d",a*b);
    else{
        if(ch=='/')
            printf("%.1f",a/b);
    }
    }
