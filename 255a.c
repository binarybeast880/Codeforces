#include<stdio.h>
main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int chest=0,biceps=0,back=0;
for(int i=0;i<n;i+=3){
    chest+=a[i];
}
for(int i=1;i<n;i+=3){
    biceps+=a[i];
}
for(int i=2;i<n;i+=3){
    back+=a[i];
}
if(chest>biceps && chest>back)
    printf("chest");
else if(back>biceps && back>chest)
    printf("back");
else
    printf("biceps");
}
