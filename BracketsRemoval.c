#include<stdio.h>

void main(){
    char str[100];
    printf("Enter a String: ");
    scanf("%[^\n]%*c",str);
    int i,count=0;
    for(i=0;str[i];i++){
        str[i-count]=str[i];
        if(str[i]=='(' || str[i]==')' || str[i]=='{' || str[i]=='}' || str[i]=='[' || str[i]==']'){
            count++;
        }
    }
    str[i-count]=str[i];
    printf("Simplified Expression: %s \n",str);
}