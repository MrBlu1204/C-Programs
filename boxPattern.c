#include<stdio.h>
int main(){
    int N;
    printf("Enter Size:");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        if(i%2==0){
            printf("%d",i+1);
        }
        for(int j=1;j<=N;j++){
            printf("%d",i);
        }
        if(i%2!=0){
            printf("%d",i+1);
        }
        printf("\n");
    }
    return 0;
}