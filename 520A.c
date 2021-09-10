#include<stdio.h>
main(){
int n,i,c=0;
scanf("%d",&n);
char str[100];
scanf("%s",&str);
for(i=0;i<n;i++){
    if(str[i]>=65 && str[i]<=90){
    str[i]=str[i]+32;
    }
}
    int temp=0;
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
        }
    }
}
for(i=0;i<n-1;i++){
    if(str[i]!=str[i+1])
        c++;
}
if(c>=25)
    printf("YES");
else
    printf("NO");
}
