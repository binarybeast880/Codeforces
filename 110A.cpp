#include<stdio.h>
#include<string.h>
main(){
	int i,l,count1=0,count2=0;
	char s[20];
	scanf("%s",&s);
	l=strlen(s);
	for(i=0;s[i]!='\0';i++){
        if(s[i]=='4')
            count1++;
        else{
            if(s[i]=='7')
                count2++;
        }
	}
	if(count1+count2==l)
        printf("YES");
    else printf("NO");
	}
