#include<bits/stdc++.h>
int main(){
	int size,ec;
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&ec);
	int max=0;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				max=arr[i];
			}
		}
	}
	for(int i=0;i<size;i++){
		if(arr[i]+ec>=max){
			printf("true ");
		}
		else{
			printf("false ");
		}
	}
    return 0;
}
