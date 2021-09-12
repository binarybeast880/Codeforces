#include<stdio.h>
main(){
    int t;
    char str[20];
    scanf("%d",&t);
    while(t--){
        gets(str);
        for(int i=0;str[i]!='\0';i++){
            if(str[i]=='P' && str[i]=='C' && str[i]=='M'){
               printf("YES\n");
        }
        else printf("NO\n");
    }
}
}
