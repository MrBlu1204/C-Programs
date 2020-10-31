#include<stdio.h>
void main(){
    int N,start,end;
    printf("Enter Size of Array:");
    scanf("%d",&N);
    int arr[N];
    printf("Enter Elements:");
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter Range:");
    scanf("%d %d",&start,&end);
    printf("Missing Elements: ");
    while(start<=end){
        int count=0;
        for(int i=0;i<N;i++){
            if(start==arr[i]){
                count++;
                break;
            }
        }
        if(count==0)
          printf("%d ",start);
        start++;
    }
    printf("\n");
}