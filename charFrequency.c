#include<stdio.h>

void main(){
    char str[100];
    int i=0,alphabet[26]={0},index;
    printf("Enter a String: ");
    scanf("%[^\n]%*c",str);
    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z'){
            index=str[i]-'a';
            alphabet[index]++;
        }
        i++;
    }

    for(i=0;i<26;i++){
        if(alphabet[i] != 0)
           printf("%c = %d\n",i+'a',alphabet[i]);
    }

}