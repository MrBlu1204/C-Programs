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
    //Distinct Elements
    printf("Distinct Elements: ");
    for(int i=0;i<N;i++){
        int count = 0;
        for(int j=0;j<N;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count==1){
            printf("  %d  ",arr[i]);
        }
    }
    printf("\n");
    return 0;
}