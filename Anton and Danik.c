#include<stdio.h>
#include<string.h>
main(){
    int n,i,a=0,d=0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",&str);
    for(i=0;i<strlen(str);i++){
        if(str[i]=='A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a>d)
        printf("Anton");
    else if(a<d)
        printf("Danik");
    else printf("Friendship");
}


