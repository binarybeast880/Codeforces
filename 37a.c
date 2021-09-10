#include<stdio.h>
main(){
int n,c=1,k;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
            c++;
            k=a[i];
        }
    }
}
int max=a[0];
for(int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
        k++;
    }
}
if(k==1){
    printf("%d %d",k,max);
}
else
printf("%d %d",c,k/c);
}
