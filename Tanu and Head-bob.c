#include<stdio.h>
main(){
    int t,n,i;
    char str[20];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
    scanf("%s",&str);
        int ci=0,cy=0,cn=0;
        for(i=0;i<strlen(str);i++){
        if(str[i]=='I'){
            ci++;
        }
        else if(str[i]=='Y'){
            cy++;
        }
        else {
            if(str[i]=='N')
                cn++;
        }

    }
    if(ci>0){
        printf("INDIAN\n");
    }
    else if(ci==0 && cy==0 && cn>0){
        printf("NOT SURE\n");
    }
    else if(ci==0 && cy>0){
        printf("NOT INDIAN\n");
    }
}
}
