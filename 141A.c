#include<stdio.h>                                                  //my code
#include<string.h>
main(){
    char a[200],b[200],c[200];
    scanf("%s%s%s",&a,&b,&c);
    int temp1=0;
    for(int i=0;a[i]!='\0';i++){
        for(int j=0;a[j]!='\0';j++){
            if(a[j]>a[i]){
                temp1=a[i];
                a[i]=a[j];
                a[j]=temp1;
            }
        }
    }
    int temp3=0;
    for(int i=0;b[i]!='\0';i++){
        for(int j=0;b[j]!='\0';j++){
            if(b[j]>b[i]){
                temp3=b[i];
                b[i]=b[j];
                b[j]=temp3;
            }
        }
    }
    strcat(a,b);
    int temp4=0;
    for(int i=0;a[i]!='\0';i++){
        for(int j=0;a[j]!='\0';j++){
            if(a[j]>a[i]){
                temp4=a[i];
                a[i]=a[j];
                a[j]=temp4;
            }
        }
    }
    int temp2=0;
    for(int i=0;c[i]!='\0';i++){
        for(int j=0;c[j]!='\0';j++){
            if(c[j]>c[i]){
                temp2=c[i];
                c[i]=c[j];
                c[j]=temp2;
            }
        }
    }
    int value=strcmp(a,c);
    if(value==0){
        printf("YES\n");
    }
    else
        printf("NO\n");
}
