#include<stdio.h>
int main(){
    int N;
    printf("Enter Size:");
    scanf("%d",&N);
    int arr[N];
    printf("Enter Elements: ");
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    //sum of the pairs
    int sum=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            sum = sum + arr[i] + arr[j];
        }
    }
    printf("Sum of all the Valid Pairs is %d \n",sum);
}