#include <stdio.h>
main(){
	int a[4];
	for(int i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	int temp=0;
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	if(a[0]+a[1]>a[2]||a[1]+a[2]>a[3])
		printf("TRIANGLE");
	else if(a[1]+a[1]==a[2]||a[0]+a[2]==a[4]||a[0]+a[3]==a[4]||a[0]+a[2]==a[4])
		printf("SEGMENT");
	else
		printf("IMPOSSIBLE");
}
