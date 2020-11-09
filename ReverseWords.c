#include <stdio.h>
#include <string.h>

void reverse_words(char *x, int start, int end)
{
    char ch;
    if (start >= end)
       return;
 
    ch = *(x+start);
    *(x+start) = *(x+end);
    *(x+end) = ch;

    reverse_words(x, ++start, --end);
}

void main()
{
   char str[100];
    printf("Enter a String: ");
    scanf("%[^\n]%*c",str);
    int start,end;
    for(int i=0;str[i];i++){
        if(str[i-1]==' ' && i>0){
            start=i;
        }
        if(str[i+1]==' ' || str[i+1]=='\0'){
            end=i;
            reverse_words(str, start , end);
        }
    }
  
    printf("\nNew String with Reversed Words is: %s \n",str);
}
 
