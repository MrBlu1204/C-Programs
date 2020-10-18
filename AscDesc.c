#include<stdio.h>
int main(){
    int N,i,j;
    printf("Enter Size:");
    scanf("%d",&N);
    int arr[N];
    printf("Enter Elements: ");
    for(i=0;i<N;i++){
         scanf("%d",&arr[i]);
    }
    //Ascending
    for(i=0;i<N/2;i++){
        for(j=i;j<N/2;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //Descending
    for(int p=(int)N/2;p<N;p++){
        for(int q=p;q<N;q++){
            if(arr[p]<arr[q]){
                int temp = arr[p];
                arr[p]=arr[q];
                arr[q]=temp;
            }
        }
    }
    printf("New Arrangement: ");
    for(i=0;i<N;i++){
         printf("%d ",arr[i]);
    }
    printf("\n");
}