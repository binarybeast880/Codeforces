#include<stdio.h>
#include<string.h>
main(){
int t;
char a[105],b[105],c[105];
scanf("%d",&t);
while(t--){
    scanf("%s%s%s",&a,&b,&c);
    int l=strlen(a),flag=0;
    for(int i=0;i<l;i++){                 //problem
        if(c[i]!=a[i] && c[i]!=b[i])
            flag=1;
            break;
    }
    if(flag==1)
                printf("NO\n");
            else if(flag==0)
                printf("YES\n");
    }
}

