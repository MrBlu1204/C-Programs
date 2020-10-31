#include<stdio.h>
void main(){
    int N,key;
    printf("Enter Size:");
    scanf("%d",&N);
    int arr[N];
    printf("Enter Elements:");
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        key=arr[i];
        int j=i-1;
            while(j>=0 && arr[j]>0){
              arr[j+1]=arr[j];
              j=j-1;
            }
        arr[j+1]=key;
    }
    printf("Rearranged Array: ");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}