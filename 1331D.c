#include<stdio.h>
main(){
char str[10];
scanf("%s",&str);
int l=strlen(str);
if(str[l-1]%2==0)
    printf("0");
else
    printf("1");
}
