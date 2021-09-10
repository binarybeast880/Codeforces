#include<stdio.h>
#include<string.h>
main(){
    int n,i,j;
    scanf("%d",&n);
char s[102];
for(i=0;i<n;i++){
    scanf("%s",&s[i]);
    for(j=0;j<i;j++){
        if(s[i]==s[j])
            break;
    }
    if(j==i)
        printf("NO\n");
    else
        printf("YES\n");
}
}
