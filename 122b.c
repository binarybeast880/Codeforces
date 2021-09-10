#include<stdio.h>    //my own code
main(){
char str[51];
scanf("%s",&str);
int f=0,s=0;
for(int i=0;i<strlen(str);i++){
    if(str[i]=='4')
        f++;
    else if(str[i]=='7')
        s++;
}
if(f>s)
    printf("4");
else if(f<s)
    printf("7");
else if(f==s && f>0)
    printf("4");
else
    printf("-1");
}
