#include<stdio.h>
int main(){
    int N,i=1;
    int count=0;
    printf("Enter Size:");
    scanf("%d",&N);

    //PATTERN
    while(i<=N && i>0)
    {
        //spacing
        int k=i-1;
        while(k>0){
            printf(" ");
            k--;
        }
        //print
        printf("*");
        //spacing
        int j=(N-i)*2;
        while(j>1){
            printf(" ");
            j--;
        }
        //print
        if(i!=N){
            printf("*");
        }
     printf("\n");
     //updation
     count++;
     if(count<N){
         i++;
     }    
     else{
         i--;
     }
    }    
}