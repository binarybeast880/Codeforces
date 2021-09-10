#include<stdio.h>
#include<string.h>
main(){
int len=0;
char s[101];
gets(s);
for(int i=0;i<strlen(s);i++){
    for(int j=i+1;j<strlen(s);j++){
        if(s[i]==s[j])
        len++;
}
}
printf("%d",len);
}
