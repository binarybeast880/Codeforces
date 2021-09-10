#include<stdio.h>  //problem
main(){
char str[1000]={"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE"};
int n,c=0;
char str2[20];
scanf("%d",&n);
while(n--){
    scanf("%s",&str2);
    if(str2==str)
        c++;
    else
        if(str2<18)
        c++;
}
printf("%d",c);
}
