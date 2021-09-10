#include<stdio.h>
#include<string.h>
main(){
char str[101];
gets(str);
int l=strlen(str);
for(int i=0;i<l;i++){
    if(str[i]==' '){
        for(int j=i;j<l;j++){
            str[j]=str[j+1];
        }
        l--;
    }
}
int lf=strlen(str);
printf("%d",lf);
    if(str[lf-2]=='a'||str[lf-2]=='A'||str[lf-2]=='e'||str[lf-2]=='E'|str[lf-2]=='o'||str[lf-2]=='O'||str[lf-2]=='i'||str[lf-2]=='I'||str[lf-2]=='u'||str[lf-2]=='U'){
    printf("YES\n");
    return 0;
    }
for(int i=lf-1;i>=0;i--){
if(str[lf-2]>='A' && str[lf-2]<='Z' &&(str[lf-2]!='A'||str[lf-2]!='E'||str[lf-2]!='I'||str[lf-2]!='O'||str[lf-2]!='U'))
    lf--;
else
        break;
}
    if(str[lf-2]=='a'||str[lf-2]=='A'||str[lf-2]=='e'||str[lf-2]=='E'|str[lf-2]=='o'||str[lf-2]=='O'||str[lf-2]=='i'||str[lf-2]=='I'||str[lf-2]=='u'||str[lf-2]=='U')
        printf("YES\n");
    else
        printf("NO\n");
}
