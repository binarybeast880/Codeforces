#include<stdio.h>
main(){       //my code
int t,n;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    int a[n],c=1,freq[n];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    freq[i]=-1;
}
int count=0;
for(int i=0;i<n;i++){
        count=1;
for(int j=i+1;j<n;j++){
    if(a[i]==a[j]){
        count++;
        freq[j]=0;
    }
}
if(freq[i]!=0){
    freq[i]=count;
}
}
  int max=freq[0];
  for(int i=0;i<n;i++){
    if(freq[i]>max)
        max=freq[i];
  }
printf("%d\n",max);
}
}
