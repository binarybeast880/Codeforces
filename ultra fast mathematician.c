#include<stdio.h>
main(){
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='1' && b[i]=='1')
            a[i]='0';
        else if(a[i]=='1'&& b[i]=='0')
            a[i]='1';
        else if(a[i]=='0'&&b[i]=='1')
            a[i]='1';
        else
            a[i]='0';
    }
    printf("%s",a);
}
