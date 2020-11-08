#include<stdio.h>

void main(){
    char str1[100], str2[100];
    int count1[256] = { 0 };
    int count2[256] = { 0 };
    int i;
    printf("Enter 1st String: ");
    scanf("%[^\n]%*c",str1);
    printf("Enter 2nd String: ");
    scanf("%[^\n]%*c",str2);
    for(i=0; str1[i] && str2[i];i++){
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    if(str1[i] || str2[i]){
        printf("%s and %s are not anagrams of each other.\n",str1,str2);
    }

    else{
        for(i=0;i<256;i++){
            if(count1[i]!=count2[i]){
              printf("%s and %s are not anagrams of each other.\n",str1,str2);
              return;
            }
        }
        printf("%s and %s are anagrams of each other.\n",str1,str2);
    }
}