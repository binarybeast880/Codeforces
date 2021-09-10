//my own code

//Problem code 550A
#include<stdio.h>
#include<string.h>
main(){
 char s[100000];
 scanf("%s",&s);
 int l=strlen(s);
 for(int i=0;i<l;i++){
   if(s[i]=='A' && s[i+1]=='B'){
   for(int j=i+2;j<l;j++){
    if(s[j]=='B' && s[j+1]=='A'){
    printf("YES\n");
    return 0;
    }
   }
   }
   else if(s[i]=='B' && s[i+1]=='A'){
    for(int j=i+2;j<l;j++){
        if(s[j]=='A' && s[j+1]=='B'){
            printf("YES\n");
            return 0;
        }
    }
   }
 }
 printf("NO\n");
}
