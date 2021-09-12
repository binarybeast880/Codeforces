#include<stdio.h>
main(){
int t,n;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    int a[n],c=0,b=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2!=i%2){
            if(i%2==0){
                c++;
            }
            else{
                b++;              //copied
            }
        }
    }
    if(c!=b)
        printf("-1\n");
    else
        printf("%d\n",c);
}
}
