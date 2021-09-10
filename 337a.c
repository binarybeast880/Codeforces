/*
#include<stdio.h>
main(){
int n,m;
scanf("%d%d",&n,&m);
int a[m];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int max=a[0];
for(int i=0;i<n;i++){
    if(a[i]>max)
        max=a[i];
}
int min=a[0];
for(int i=0;i<n;i++){
    if(a[i]<min)
        min=a[i];
}
int c=0,d=0;
for(int i=0;i<n;i++){
    if(a[i]==max)
        c++;
    else if(a[i]==min)
        d++;
}
if(c>=2){
    printf("0\n");
return 0;
}
else
printf("%d",max-min);
}

*/
#include<stdio.h>
main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[m],ansfinal;
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int max=a[1],min=a[0];
            for(int i=0;i<n;i++){
                if(a[i]>max)
                max=a[i];
                if(a[i]<min)
                min=a[i];
            }
            int ans=max-min;
            ansfinal=100;
            if(ansfinal>ans)
            ansfinal=ans;
        }
    }
printf("%d",ansfinal);
}
