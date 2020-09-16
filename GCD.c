#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size,min,count,gcd=1;
    printf("Enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Numbers whose GCD has to be found: \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(int i=1;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    for(int i=2;i<=min;i++){
        count=0;
        for(int j=0;j<size;j++){
            if(arr[j]%i==0){
                count++;
            }
            else
            {
                break;
            }
        }
        if(count==size){
            gcd=i;
        }
    }
    printf("%d is the GCD of the following Numbers.\n",gcd);
}