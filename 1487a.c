#include<stdio.h>  //my code
main(){
int t,n,i,j;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        int c=0,min=a[0];
        for(i=0;i<n;i++){
            if(a[i]<min)
                min=a[i];
        }
        for(i=0;i<n;i++){
            if(a[i]==min)
                c++;
        }
        printf("%d\n",n-c);
}
}
