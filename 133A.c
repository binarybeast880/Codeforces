#include<stdio.h>
main(){
char str[105];
scanf("%s",&str);
int c=0,i;
for(i=0;i<strlen(str);i++){
    if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
        c++;
    if(c==1)
        break;
}
if(c==1)
    printf("YES\n");
else
    printf("NO\n");
}
