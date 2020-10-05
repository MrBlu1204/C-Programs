#include<stdio.h> 

int main() 
{ 
	int n;
	int j, k = 0; 
	printf("Enter Size:");
    scanf("%d",&n);
	for (int i=1; i<=n; i++) { 
		if (i%2 != 0) { 
			for (j=k+1; j<k+i; j++) 
				printf("%d*", j); 
			printf("%d\n", j++); 
			k = j;	 
		} else { 
			k = k+i-1; 
			
			for (j=k; j>k-i+1; j--) 
				printf("%d*", j); 
			printf("%d\n", j);	 
		} 
	} 
	return 0; 
}