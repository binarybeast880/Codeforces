#include<stdio.h>
main(){
    int n,i,j,count=0,k,a[200];
    scanf("%d",&n);
   int p,q;
   scanf("%d",&p);
   for(i=0;i<p;i++){
    scanf("%d",&a[i]);
   }
   scanf("%d",&q);
   for(j=p;j<p+q;j++){
    scanf("%d",&a[j]);
   }
   int temp=0;
   for(j=0;j<p+q;j++){
    for(k=j+1;k<p+q;k++){
        if(a[j]>a[k]){
            temp=a[j];
            a[j]=a[k];
            a[k]=temp;
        }
    }
   }
   for(i=0;i<p+q;i++){
    if(a[i]!=a[i+1])
        count++;
   }
    if(count==n)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
}
