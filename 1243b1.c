#include<stdio.h>
main(){
int t,n;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    char s1[n],s2[n];
    scanf("%s",&s1);
    scanf("%s",&s2);
    int pos1,pos2;
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i])
            pos1=i;
    }
    for(int i=n-1;i>=0;i--){
        if(s1[i]!=s2[i])
            pos2=n-i;
    }
}
}
