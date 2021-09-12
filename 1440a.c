#include<stdio.h>
#include<string.h>
main(){
int t,n,c0,c1,h;
scanf("%d",&t);
while(t--){
    scanf("%d%d%d%d",&n,&c0,&c1,&h);
    char s[n];
    scanf("%s",&s);
    int sum=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(c1<h+c0){
                sum+=c1;
            }
            else
                sum+=h+c0;
        }
        else if(s[i]=='0'){
            if(c0<h+c1){
                sum+=c0;
            }
            else
                sum+=h+c1;
        }
    }
    printf("%d\n",sum);
}
}
