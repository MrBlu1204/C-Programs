#include<stdio.h>
int main(){
    int N,size=0,pallindrome=-1;
    printf("Enter size of Array:");
    scanf("%d",&N);
    int arr[N];
    printf("Enter Elements:");
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        int tmpSize=0, tmpPallindrome;
        tmpPallindrome=arr[i];
        while(tmpPallindrome>0){
            tmpPallindrome=tmpPallindrome/10;
            tmpSize++;
        }
        int reverse=0;
        tmpPallindrome=arr[i];
        if(tmpSize>size && tmpSize>1){
            while(tmpPallindrome>0){
                reverse=(reverse*10) + (tmpPallindrome%10);
                tmpPallindrome=tmpPallindrome/10;
            }
        }
        if(reverse==arr[i]){
            size=tmpSize;
            pallindrome=arr[i];
        }

    }
    printf("Largest Pallindrome is %d.\n",pallindrome);
    return 0;
}