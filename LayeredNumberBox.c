#include <stdio.h>

int main() 
{

    int N;
    printf("Enter Size: ");
    scanf("%d", &N);
    int len = N*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", N-min);
        }
        printf("\n");
    }
    return 0;
}