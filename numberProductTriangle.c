#include<stdio.h>
int main(){
    int N,count;
    printf("Enter Size:");
    scanf("%d",&N);
    int i=1;
    count=1;
    while(i<=N){
        for(int j=1;j<=i;j++){
            printf("%d",count);
            count++;
            if(j != i){
                printf("*");
            }
        }
        i++;
        printf("\n");
    }
    i--;
    while(i>0){
        if(i==N){
            count-=i;
        }
        else{
            count=count-2*i-1;
        }
         for(int j=1;j<=i;j++){
            printf("%d",count);
            count++;
             if(j != i){
                printf("*");
            }
        }
        i--;
        printf("\n");
    }

}