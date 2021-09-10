#include<stdio.h>
main(){
int n,m;
scanf("%d%d",&n,&m);
char s[m+1];
int b=0,c=0;
for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
    scanf("%s",&s[i]);
    if(s[i]=='B' || s[i]=='W' || s[i]=='G')
        b++;
    else
        c++;
}
}
if(c==0)
    printf("#Black&White");
else
    printf("#Color");
}


