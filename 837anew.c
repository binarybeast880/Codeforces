#include<stdio.h>
#include<string.h>
main(){
int n;
char s[201];
scanf("%d",&n);
for(int i=1;i<=n;i++){
    scanf("%c",&s[i]);
}
int max=0,c=0;
for(int i=1;i<=n;i++){
    if(s[i]>='A' && s[i]<='Z'){
        c++;
    }
    max=c;
    if(s[i]==' '){
        c=0;
    }
}
printf("%d",max);
}
