#include<stdio.h>
int main(){
    int N, S;
    printf("Enter Size:");
    scanf("%d",&N);
    printf("Enter Starting Number:");
    scanf("%d",&S);
    int i=1;
    while(i<=N){
        for(int j=1;j<=i;j++){
            printf("%d",S);
        }
        S++;
        i++;
        printf("\n");
    }
    S--;
    i--;
    while(i>0){
         for(int j=1;j<=i;j++){
            printf("%d",S);
        }
        S--;
        i--;
        printf("\n");
    }

}