/*
#include<stdio.h>
main(){
    int n,a[1000],s=0,d=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int temp=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    for(i=0;i<n;i+=2){
        s+=a[i];
    }
    for(i=1;i<n;i+=2){
        d+=a[i];
    }
    printf("%d %d",s,d);
}
*/
#include<stdio.h>
main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
}
int temp=0;
for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
        if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
int sereja=0,dima=0;
for(int i=1;i<=n;i+=2){
    sereja+=a[i];
}
for(int i=2;i<=n;i+=2){
    dima+=a[i];
}
printf("%d %d",sereja,dima);    //error
}
