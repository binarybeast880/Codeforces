#include<stdio.h>   //my own code
#include<string.h>
main(){
    char s[105];
    scanf("%s",&s);
    int c=0,i,l=strlen(s);
    for(i=0;i<l;i++){
        if(s[i]>='A' && s[i]<='Z')
            c++;
    }
    if(c==l){
        for(i=0;i<l;i++){
            s[i]+=32;
        }
    }
    else if(c==l-1){
       if(s[0]>='a' && s[0]<='z'){
        s[0]-=32;
       for(i=1;i<l;i++){
        s[i]+=32;
       }
}
    }
    printf("%s",s);
}
