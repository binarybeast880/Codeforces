#include<stdio.h>
#include<string.h>
main(){
    char s[100];
    int i,upper=0,lower=0;
    gets(s);
    for(i=0;i<strlen(s);i++){
        if(s[i]>='a'&&s[i]<='z'){
            lower++;
        }
        else upper++;
    }
    if(lower==upper){
            for(i=0;i<strlen(s);i++){
            if(s[i]>=65 &&  s[i]<=90)
                s[i]=s[i]+32;
    }
    }
    else if(lower>upper){
            for(i=0;i<strlen(s);i++){
            if(s[i]>=65 && s[i]<=90)
                s[i]=s[i]+32;
        }
    }
    else if(lower<upper){
            for(i=0;i<strlen(s);i++){
            if(s[i]>=97 && s[i]<=122)
            s[i]=s[i]-32;
    }
    }
                    printf("%s",s);
}
