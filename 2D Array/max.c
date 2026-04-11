#include<stdio.h>
#include<limits.h>
int main(){
    int max = INT_MIN;
    int n;
    printf("Enter number of row:");
    scanf("%d",&n);
     int m;
    printf("Enter number of column:");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
     printf("\n");
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
     printf("\n");
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    printf("%d is maximum",max);
    return 0;
}