#include<stdio.h>
int main(){
    int m,n;
    printf("Enter Size of the Matrix: ");
    scanf("%d %d",&m,&n);
    int matrix[m][n];
    printf("Enter Elements in the Matrix:\n");
    for(int i=0;i<m;i++){
        printf("Enter Elements of row %d: ",i+1);
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Matrix after 90 degrees roration \n");
    for(int i=0;i<n;i++){
       for(int j=m-1;j>=0;j--){
           printf("%d  ",matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}