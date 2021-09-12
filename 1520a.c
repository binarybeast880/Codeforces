#include<stdio.h>
#include<string.h>   //problem
main(){
int t,n;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    char s[n];
    int flag=0;
    scanf("%s",&s);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]!=s[j]){
                for(int k=j+1;k<n;k++){
                    if(s[k]==s[i])
                        flag=1;
                    break;
                }
            }
        }
    }
    if(flag=1)
        printf("NO\n");
    else
        printf("YES\n");
}
}
