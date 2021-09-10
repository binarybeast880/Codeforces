#include<stdio.h>
#include<string.h>
main(){
    int i;
    char str[1000];
    scanf("%s",&str);
        if(str[0]>='a' && str[0]<='z'){
            str[0]-=32;
            printf("%s",str);}
        else
    printf("%s",str);
}
