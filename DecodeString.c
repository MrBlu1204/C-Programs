#include<stdio.h>
#include<string.h>
void main(){
    char str[100],count=0;
    printf("Enter a String: ");
    scanf("%[^\n]%*c",str);
    int i;
    for(i=0;str[i];i++){
        if(str[i]>='0' && str[i]<='9'){
           count=count+(str[i]-'0');
        }
        else{
             if(str[i+1]<'0' || str[i+1]>'9')
              count++;
        }
    }
    str[count]='\0';
    count--;
    i--;
    while(i>=0){
        if(str[i]>='0' && str[i]<='9'){
            for(int j=str[i]-'0';j>1;j--){
                str[count]=str[i-1];
                count--;
            }
        }  
        else{
            str[count]=str[i];
            count--;
        }
        i--;
    }
    printf("Decoded String: %s \n",str);
}