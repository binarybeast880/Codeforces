#include<stdio.h>
#include<string.h>
main(){
    int  t,counta,countb,i;
    scanf("%d",&t);
    char str[100];
    while(t--){
        scanf("%s",&str);
        for(i=0;i<strlen(str);i++){
            if(str[i]=='a')
                counta++;
            else countb++;
        }
        if(counta>countb)
            printf("%d\n",countb);
        else printf("%d\n",counta);
        counta=0;
        countb=0;
    }
}
