#include<stdio.h>
#include<string.h>
main(){
    char s[1000000];
    scanf("%s",&s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='.'){
            if(s[i+1]=='9'){
            printf("GOTO Vasilisa");
            return 0;
            }
            else if(s[i+1]<=4){
            for(int j=0;j<i;j++){
                printf("%s",s[j]);
            }
                return 0;
            }
            else if(s[i+1]<9 && s[i]>=5){
                s[i-1]+=1;
                for(int j=0;j<i;j++){
                    printf("%s",s[j]);
                }
                return 0;
            }
        }
    }
}
