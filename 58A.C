#include<stdio.h>     
#include<string.h>
main(){
char s[101];
char h[]="hello";
scanf("%s",&s);
int j=0;
for(int i=0;i<strlen(s);i++){
    if(s[i]==h[j])
    j++;
    if(j==5){
        printf("YES\n");
        return 0;
    }
}
printf("NO\n");
}
