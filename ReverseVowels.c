#include<stdio.h>

void main(){
    char str[100];
    printf("Enter a String: ");
    scanf("%[^\n]%*c",str);
    char vowels[100];
    int j=0;
    for(int i =0;str[i];i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
             vowels[j]=str[i];
             j++;
         }
    }
    j--;
    for(int i =0;str[i] && j>=0;i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
             str[i]=vowels[j];
             j--;
         }
    }
    printf("New String: %s.\n",str);
}