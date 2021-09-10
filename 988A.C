#include<stdio.h>
main(){
int n,k;
scanf("%d%d",&n,&k);
int a[n],pos[n],i,j;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int c=1;
int one=a[0];
for(i=1;i<n;i++){
        if(a[i]!=a[0]){
            c++;
            pos[c]=i+1;
        }
    }
if(c==k){
    printf("YES\n");
    for(i=0;i<c;i++){
        pos[0]=1;
        printf("%d ",pos[i]);                 //problem
    }
}
else
    printf("NO\n");
}
