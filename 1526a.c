#include<stdio.h>
main(){
int n;
scanf("%d",&n);
int size=2*n;
int a[size];
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
int temp=0;
for(int i=0;i<size-1;i++){
    for(int j=i+1;j<size;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
int tex=0;
for(int i=1;i<size;i++){
    tex=a[i+2];
    a[i+2]=a[i+1];
    a[i+1]=tex;
    i++;
}
for(int i=0;i<size;i++){
    printf("%d ",a[i]);
}
}
