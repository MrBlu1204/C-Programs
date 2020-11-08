#include<stdio.h>

void main(){
    char str[100];
    printf("Enter a String: ");
    scanf("%[^\n]%*c",str);
    if(str[0]>='a'&& str[0]<='z')
        str[0]=str[0]-32;
    
    for(int i=1; str[i] ;i++){
        if(str[i]>='a'&& str[i]<='z'){
           if(str[i+1]=='\0' || str[i-1]==' ')
              str[i]=str[i]-32;
        }
    }

    printf("New Capitalized String: %s \n",str);
}