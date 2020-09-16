#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,prime,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    prime=2;
    while(prime<=n){
        if(n%prime==0){
            sum=sum+prime;
        }
        nonPrime:
        prime++;
        for(int j=2;j<prime;j++){
            if(prime%j==0){
                goto nonPrime;
            }
        }
    }
    printf("The sum of the prime factors of %d is %d.\n",n,sum);
    return 0;
}