#include<stdio.h>
main(){
int s,n;
scanf("%d%d",&s,&n);
int x[n],y[n];
for(int i=0;i<n;i++){
    scanf("%d%d",&x[i],&y[i]);
}
for(int i=0;i<n;i++){
    if(s>x[i]){
    s+=y[i];
}
else
    printf("NO\n");
return 0;
}
    printf("YES\n");
}
