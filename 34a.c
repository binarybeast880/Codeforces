#include<stdio.h>
main(){
int n;
scanf("%d",&n);
int a[n+1];
for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
}
int min=a[0];
for(int  i=1;i<=n;i++){
    if(a[i]<min)
        min=a[i];
}
int pos1,pos2,c=0;
for(int i=1;i<=n;i++){
    if(a[i]==min)
        c++;
}
if(c>=2){
    for(int i=1;i<=n;i++){
        if(a[i]==min)
            pos1=i;
    }
    for(int i=n;i>=1;i--){
        if(a[i]==min)
            pos2=n-(n-i);
    }
    printf("%d %d",pos1,pos2);
    return 0;
}
int posn;
for(int i=1;i<=n;i++){
    if(a[i]==min)
        posn=i;
}
if(c<2){
    int temp;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int pos3=2;
    printf("%d %d",posn,pos3);
}
}
