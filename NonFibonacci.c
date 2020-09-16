#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,c,nonfobo;
    int a=0;
    int b=1;
    printf("Enter a Number:");
    scanf("%d",&n);
    int i=0;
    printf("Non- Fobo Numbers are: ");
    while(i<n){
        c=a+b;
        if((c-b)>1){
            nonfobo=b+1;
            while(nonfobo < c && i<n){
                printf("%d ",nonfobo);
                i++;
                nonfobo++;
            }
        }
        a=b;
        b=c;
    }
    printf("\n");

    return 0;
}