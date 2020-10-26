#include<stdio.h>
int main(){
    int m,n;
    printf("Enter Size of Square Matrix: ");
    scanf("%d %d",&m,&n);
    int matrix[m][n];
    printf("Enter Elements in the Matrix:\n");
    for(int i=0;i<m;i++){
        printf("Enter Elements of row %d: ",i+1);
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        int min_row=matrix[i][0],col_ind=0;
        for(int j=1;j<n;j++){
            if(min_row>matrix[i][j]){
                min_row=matrix[i][j];
                col_ind=j;
            }
        }
        int k;
        for(k=0;k<n;k++){
            if(min_row<matrix[k][col_ind])
             break;
        }
        if(k==n){
            printf("Saddle Point is %d",min_row);
        }
    }
    return 0;
}