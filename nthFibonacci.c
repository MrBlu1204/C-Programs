#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n){
  if(n==0)
  {
   return 0;
  }
  else if (n==1)
  {
    return 1;
  }
  
  else
  {
    return fibonacci(n-1) + fibonacci(n-2);
  }
  
}

int main()
{
  int n;
  printf("Enter a Number:");
  scanf("%d",&n);
  int result =fibonacci(n);
  printf("The nth term of the Fibanacci Series is %d",result);
}