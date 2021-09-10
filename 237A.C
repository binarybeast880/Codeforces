#include<stdio.h>
main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }                                     //problem
    int c=1;
    for(int i=0;i<n;i++){
            if(a[i]==a[i+1] && b[i]==b[i+1])
            c++;
        }
    printf("%d\n",c);
}
