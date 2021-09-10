#include<string.h>
#include<stdio.h>
main(){
    char str[10];
    scanf("%s",&str);
    int l=strlen(str);
    int c=0;
    for(int i=0;i<l;i++){
       if(str[i]!='1' || str[i]!='4'){
        printf("NO");
        return 0;
       }
       else if(str[0]=='4'){
        printf("NO");
       return 0;
       }
       else if(str[i]==str[i+1] && str[i+1]==str[i+2] && str[i+2]=='4'){
        printf("NO");
        return 0;
       }
       else
       printf("YES");
       }
}
