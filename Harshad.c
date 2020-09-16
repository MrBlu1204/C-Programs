#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,sum;
    printf("Enter the number:");
    scanf("%d",&n);
    int q=n;
    sum=0;
    while(q!=0){
        sum=sum + q % 10;
        q=q/10;
    }
    if(n%sum==0){
        printf("%d is a Harshad Number.\n",n);
    }
    else{
        printf("%d is not a Harshad Number.\n",n);
    }
    return 0;
}