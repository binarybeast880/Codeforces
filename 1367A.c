/*#include<stdio.h>
#include<string.h>
main(){
    int t;
    char a[1005];
    scanf("%d",&t);
    while(t--){
        scanf("%s",&a);
        for(int i=1;i<strlen(a)-1;i++){
            for(int j=i+1;a[j]!='\0';j++){
                if(a[j]==a[i]){
                    for(int k=j;a[k]!='\0';k++){
                        a[k]=a[k+1];
                    }
                }
            }
        }
        printf("%s",a);
    }
}
*/
/*
#include<stdio.h>
#include<string.h>
main(){
char a[1005],b[1005];
int t;
scanf("%d",&t);
while(t--){
    scanf("%s",&a);
    for(int i=2;i<strlen(a)-1;i+=2){
        b[i]+=a[i];
    }
    printf("%s",b);
}
}
*/

#include<stdio.h>
#include<string.h>
main(){
int t;
char s[101];
scanf("%d",&t);
while(t--){
    scanf("%s",&s);
    printf("%c",s[0]);
    for(int i=1;i<strlen(s);i++){
        if(s[i]==s[i+1]){
            printf("%c",s[i]);
        i++;
        }
    }
    printf("%c",s[strlen(s)-1]);
    printf("\n");
}
}
