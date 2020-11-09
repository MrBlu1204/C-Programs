#include<stdio.h>

void main(){
    char str[100];
    printf("Enter a String: ");
    scanf("%[^\n]%*c",str);
    int i,count=0;
    for(i=0;str[i];i++){
        if(str[i]=='(')
            count++;
        if(str[i]==')')
            count--;
    }
    if(count==0){
        printf("Code 1 : Paranthesis is BALANCED.\n");
    }
    else{
     printf("Code -1 : Paranthesis is UNBALANCED.\n");
    }
}