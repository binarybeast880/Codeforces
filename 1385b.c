#include<stdio.h>  //my code
main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
    int i, j, k;
    scanf("%d", &n);
    int size=2*n;
    int arr[size];
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i] == arr[j]){
                for(k=j; k < size - 1; k++){
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
}
