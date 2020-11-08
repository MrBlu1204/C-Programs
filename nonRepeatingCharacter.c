#include<stdio.h>

void main(){
    char str[100];
    printf("Enter a String: ");
    scanf("%[^\n]%*c",str);

    for(int i=0; str[i] ;i++){
        int count=0;
        for(int j=0; str[j]; j++){
            if(str[i]==str[j])
                count++;
        }
        if(count==1){
            printf("%c is the 1st non-repeating Character.\n",str[i]);
            return;
        }
    }
}