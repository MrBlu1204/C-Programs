#include<stdio.h>

void frequency(int arr[],int N,int S);
void arrange(int arr[],int N,int S,int freq,int num){
    if(S==N){
        return;
    }
    else{
        for(int i=0;i<freq;i++){
            for(int j=S;j<N;j++){
                if(arr[j]==num){
                    arr[j]=arr[i+S];
                    arr[i+S]=num;
                    i++;
                }
            }
        }
        frequency(arr,N,freq+S);   
    }
}

void frequency(int arr[],int N,int S){
    if(S==N){
        return;
    }
    else{
        int freq=0;
        int num=arr[S];
        for(int i=S;i<N;i++){
            int curF=0;
            int curN=arr[i];
            for(int j=i;j<N;j++){
                if(arr[j]==curN){
                    curF++;
                }
            }
            if(curF>freq){
                num=curN;
                freq=curF;
            }
        }
        arrange(arr,N,S,freq,num);
    }  
}



int main(){
    int N,freq,num;
    printf("Enter Size:");
    scanf("%d",&N);
    int arr[N];
    printf("Enter Elements: ");
    for(int i=0;i<N;i++){
         scanf("%d",&arr[i]);
    }
    frequency(arr,N,0);
    for(int i=0;i<N;i++){
         printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}


