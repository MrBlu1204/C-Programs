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
    int i,k=0,l=0;
    while(k<m && l<n){
        for(i=l;i<n;i++){
            printf("%d ",matrix[k][i]);
        }
        k++;

        for(i=k;i<m;i++){
            printf("%d ",matrix[i][n-1]);
        }
        n--;

        if(k<m){
            for(i=n-1;i>=l;i--){
              printf("%d ",matrix[m-1][i]);
            }
            m--;
        }
        if(l<n){
            for(i=m-1;i>=k;i--){
              printf("%d ",matrix[i][l]);
            }
            l++;
        }
    }
    printf("\n");
    return 0;

}