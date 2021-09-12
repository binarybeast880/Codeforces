#include<stdio.h>  //complete
#include<string.h>
main(){
int n;
scanf("%d",&n);
char s[n];
scanf("%s",&s);
int zero=0,one=0;
for(int i=0;i<strlen(s);i++){
    if(s[i]=='z')
        zero++;
    else if(s[i]=='n')
        one++;
}
for(int i=1;i<=one;i++){
    printf("1 ");
}
for(int i=1;i<=zero;i++){
    printf("0 ");
}
}
