#include<stdio.h>
#include<limits.h>
int main(){
     int n;
    printf("Enter number of row:");
    scanf("%d",&n);
    int m;
    printf("Enter number of column:");
    scanf("%d",&m);
    int arr[n][m];
    printf("Enter matrix elements:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maxSum = INT_MIN;
    int rowIndex;
     for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
           sum += arr[i][j];
        }
       if(sum > maxSum){
        maxSum = sum;
        rowIndex =i;
       }
    }
    printf("\nRow with maximum matrix sum = %d",rowIndex);
    printf("\nMaximum sum = %d",maxSum);
    return 0;
}