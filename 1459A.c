#include<stdio.h>
main(){
    int t,n,i,temp1,temp2,j,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        char a[n],b[n];
        scanf("%s%s",&a,&b);
        int length1=strlen(a);
        int length2=strlen(b);
        temp1=0;
        for(i=0;i<length1;i++){
            for(j=i+1;j<length1;j++){
                if(a[i]>a[j]){
                    temp1=a[i];
                    a[i]=a[j];
                    a[j]=temp1;
                }
            }
        }
        temp2=0;
        for(i=0;i<length2;i++){
            for(j=i+1;j<length2;j++){
                if(b[i]>b[j]){
                    temp2=b[i];
                    b[i]=b[j];
                    b[j]=temp2;
                }
            }
        }
        if(a==b)
            printf("EQUAL\n");
        else if(a>b)
            printf("RED\n");
        else
            printf("BLUE\n");
    }
}
