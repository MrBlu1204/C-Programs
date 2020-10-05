#include <stdio.h> 

int main() 
{ 
    int N; 
	printf("Enter Size: "); 
    scanf("%d", &N); 
    int p=N; 
    if(N>=1 && N<=100) { 
		for(int i=1;i<=N;i+=2) { 
		    int k=(i-1)*N+1; 
		    for(int j=0;j<N-1;j++) { 
		        printf("%d * ", k); 
		        k++; 
		    } 
		    printf("%d \n", k); 
		} 

		if(N%2!=0) 
			p=N-1; 

		for(int i=p;i>0;i-=2) { 
		    int k=(i-1)*N+1; 
		    for(int j=0;j<N-1;j++) { 
		        printf("%d * ", k); 
		        k++; 
		    } 
		    printf("%d \n", k);  
		} 
    } 
    else 
    { 
        printf("Enter a Valid Input(1-100)!\n"); 
    } 
    return 0; 
} 
