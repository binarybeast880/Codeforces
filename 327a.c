#include<stdio.h>
main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int max=0,c=0,pos1,pos2;
for(int i=0;i<n;i++){
    if(a[i]==0 && a[i+1]==0){
        c++;
    if(c>max){
        max=c;
        pos1=i;
        pos2=i+max;
    }
    }
    else c=0;
}
printf("\nLength between the First and Last occurence of   1 is  %d\n",max);
printf("First position of 1 is  %d  and the last position of  1 is  %d\n",pos1,pos2);
int one=0;
for(int j=pos1;j<=pos2;j++){
    if(a[j]=0){
        a[j]=1;
    }
}
for(int j=pos1;j<=pos2;j++){
    if(a[j]==1)
        one++;
}
printf("%d",one);
}
