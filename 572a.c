#include<stdio.h>  //time limit exceeded on test 9
main(){
int a,b;
scanf("%d%d",&a,&b);
int k,m,i,j;
scanf("%d%d",&k,&m);
long long int arr1[a],arr2[b];
for(i=0;i<a;i++){
    scanf("%lld",&arr1[i]);
}
for(j=0;j<b;j++){
    scanf("%lld",&arr2[j]);
}
int c1,c2=0;
for(j=0;j<b;j++){
        c1=0;
    for(i=0;i<a;i++){
        if(arr1[i]<arr2[j]){
            c1++;
        }
        if(c1>k){
            c2++;
        }
    }
}
if(c1>=k && c2>=m)
    printf("YES\n");
else
    printf("NO\n");
}
