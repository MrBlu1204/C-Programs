#include<stdio.h>
void main(){
    int N,key;
    printf("Enter Size:");
    scanf("%d",&N);
    int arr[N],rank[N];
    printf("Enter Elements: ");
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
            rank[i]=arr[i];
            key=rank[i];
            int j=i-1;
            while(j>=0 && rank[j]>key){
                 rank[j+1]=rank[j];
                 j=j-1;
            }
            rank[j+1]=key;
    }
    printf("Element Ranking: ");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(arr[i]==rank[j]){
                printf("%d ",j+1);
                break;
            }
        }
    }
    printf("\n");
}