#include <stdio.h>
#include <string.h>
main(){
    char s[105],t[105];
    int i,count=0;
    scanf("%s",&s);
    scanf("%s",&t);
    int l=strlen(s);
    for(i=0;i<l;i++){
        if(s[i]==t[l-1-i])
            count++;
}
    if(count==l)
        printf("YES");
    else printf("NO");
}
