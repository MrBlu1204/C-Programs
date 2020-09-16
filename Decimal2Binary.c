#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,q,d,b=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    q=n;
    d=1;
    while(q!=1){
        b=b+(q%2)*d;
        d=d*10;
        q=q/2;
    }
    b=b+q*d;
    printf("The binary form of %d is %04d.\n",n,b);
}