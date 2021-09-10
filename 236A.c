#include<stdio.h>
#include<math.h>
#include<string.h>
main(){
    char str[206];
    scanf("%s",&str);
    int i,j,c;
    int l=strlen(str);
    for(i=0;i<l;i++){
        for(j=i+1;j<l;j++){
            if(str[i]==str[j])
                c++;
    }
    }
    int ans=abs(l-c);
    if(ans>26)
        printf("IGNORE HIM!");
    else if(ans%2==0)
        printf("CHAT WITH HER!");
    else if(ans%2==1)
        printf("IGNORE HIM!");

}
