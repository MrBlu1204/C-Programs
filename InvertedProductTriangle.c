#include <stdio.h> 

int main() 
{ 

	int space,N, i, j, lterm, rterm; 

    printf("Enter Size:");
    scanf("%d",&N);
	// The terms on the LHS of the pattern 
	lterm = 1; 

	// The terms on the RHS of the pattern 
	rterm = N * N + 1; 

	for (i = N; i > 0; i--) { 

		for (space = N; space > i; space--) 
			printf("  "); 

		for (j = 1; j <= i; j++) { 
			printf("%d", lterm);
			printf("*"); 
			lterm++; 
		} 
		for (j = 1; j <= i; j++) { 
			printf("%d", rterm); 
			if (j < i) 
				printf("*"); 
			rterm++; 
		} 

		rterm = rterm - (i - 1) * 2 - 1; 
		printf("\n"); 
	} 
	
	return 0;
} 