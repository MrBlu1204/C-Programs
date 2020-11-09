#include<stdio.h>
#include<string.h>

void main(){
    char str[100],subStr[100],newStr[100];
    printf("Enter a String: ");
    scanf("%[^\n]%*c",str);
    printf("Enter Substring that needs to be replaced: ");
    scanf("%[^\n]%*c",subStr);
    printf("Enter New String to Replace the substring: ");
    scanf("%[^\n]%*c",newStr);
    int stringLen,subLen,newLen;
    int i=0,j,k;
    int flag=0,start,end;
    stringLen=strlen(str);
    subLen=strlen(subStr);
    newLen=strlen(newStr);

    for(i=0;i<stringLen;i++){
        flag=0;
        start=i;
        for(j=0;str[i]==subStr[j];j++,i++){
            if(j==subLen-1)
                flag=1;
        }
        end=i;
        if(flag==0)
            i-=j;
        else{
            for(j=start;j<end;j++){
                for(k=start;k<stringLen;k++)
                     str[k]=str[k+1];
                stringLen--;
                i--;
            }

            for(j=start;j<start+newLen;j++){
                for(k=stringLen;k>=j;k--)
                     str[k+1]=str[k];
                str[j]=newStr[j-start];
                stringLen++;
                i++;
            }
        }
   }
   printf("New String: %s\n",str);
}