#include<stdio.h>
#include<math.h>
main(){
	long int n;
	scanf("%ld",&n);
		int h=sqrt(n);
		for(int i=h;i>0;i--){
			if(n%i==0) {
				printf("%d %d\n",i,n/i);
				break;
			}
		}
	}
