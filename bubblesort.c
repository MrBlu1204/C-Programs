#include<stdio.h>

int main()
{
 int N,d;
 printf("Enter Size of Array: ");
 scanf("%d",&N);
 int arr[N];
 printf("Enter Elements in the Array:\n");
 for(int i=0;i<N;i++)
 {
  printf("Enter Element %d: ",(i+1));
  scanf("%d",&arr[i]);
 }
 printf("ARRAY: ");
 for(int i=0;i<N;i++)
  printf("| %d ",arr[i]);
 printf("|\n");
 
 //Bubble Sort//
 for(int i=0;i<N;i++)
 {
  for(int j=0;j<N-i;j++)
  {
   if(arr[j]>arr[j+1])
   {
    d=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=d;
   }
  }
 }
 printf("SORTED ARRAY: ");
 for(int i=0;i<N;i++)
  printf("| %d ",arr[i]);
 printf("|\n");
 
 return 0;
}
  
