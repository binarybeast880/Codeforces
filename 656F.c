#include<stdio.h>
main(){
char str[10];
scanf("%s",&str);
int sum=0;
int l=strlen(str);
for(int i=0;i<l;i++){
    if(str[i]=='1'){
        sum+=10;
        i++;
    }
    else if(str[i] >='2' && str[i]<='9')  {
        sum+=str[i]-'0';
    }
}
    printf("%d",sum+1);
}
