#include<stdio.h>
main(){
int n,k;
scanf("%d%d",&n,&k);
int a[n],pos[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    pos[i]=i;
}
int temp;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
}
