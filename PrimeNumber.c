#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,prime;
    printf("Enter a Number:");
    scanf("%d",&n);
    prime=2;
    int i=1;
    while(i!=n){
        nonPrime:
        prime++;
        for(int j=2;j<prime;j++){
            if(prime%j==0){
                goto nonPrime;
            }
        }
        i++;
    }
    printf("%d is the %dth Prime Number.\n",prime,n);
    return 0;
}