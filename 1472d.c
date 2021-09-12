#include<stdio.h>
main(){
int t,n;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
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
   int ans=0;
   for(int i=0;i<n;i++){
    if(i%2==0){
        if(a[i]%2==0)
            ans+=a[i];
    }
        else {
                if(a[i]%2==1)
            ans-=a[i];
           }
    }
   if(ans==0)
    printf("Tie\n");
   else if(ans>0)
    printf("Alice\n");
   else
    printf("Bob\n");
}
}
