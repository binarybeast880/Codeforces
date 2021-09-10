#include<stdio.h>
main(){
    int n,x;
    char s[n][5];
    scanf("%d",&n);
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                scanf("%s",&s[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                if(s[i][j]=='0' && s[i][j+1]=='0')
                s[i][j]==s[i][j+1]=='+';
                x=1;
                break;
            }
        }
        if(x==1)
        printf("YES\n");
        for(int i=0;i<n;i++){
        for(int  j=0;j<5;j++){
        printf("%s",s[i][j]);
                }
            }
        if(x!=1)                                 //PROBLEM
        printf("NO\n");
}


