#include<stdio.h>
void main(){
    int N,K;
    printf("Enter Size of Array:");
    scanf("%d",&N);
    printf("Enter Group Size: ");
    scanf("%d",&K);
    int arr[N],group[K];
    printf("Enter Elements:");
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int i=0;
    while(i<N){
        for(int j=0;j<K && i<N;j++,i++){
            group[j]=arr[i];
        }
        for(int j=0;j<K;j++){
            arr[i-j-1]=group[j];
        }
    }
    printf("Rearranged Array: ");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}