#include<stdio.h>
int main(){
    int N,sum;
    printf("Enter Size:");
    scanf("%d",&N);
    int arr[N];
    printf("Enter Elements: ");
    for(int i=0;i<N;i++){
         scanf("%d",&arr[i]);
    }
    printf("Enter Sum: ");
    scanf("%d",&sum);
    printf("The Triplets with sum %d are ",sum);
    for(int i=0;i<N-2;i++){
        for(int j=i+1;j<N-1;j++){
            for(int k=j+1;k<N;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    printf(" { %d , %d , %d } ,",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("\b \n");
}