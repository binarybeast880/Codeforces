#include<stdio.h>
#include<string.h>
main(){
    int c=0;
    char str[60];
    scanf("%s",&str);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]=='a')
            c++;
    }
    if(2*c-1>l)
        printf("%d",l);
    else
        printf("%d",2*c-1);
    }
