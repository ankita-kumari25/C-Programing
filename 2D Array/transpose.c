#include<stdio.h>
 int main(){
   int n;
   printf("Enter number of rows:");
   scanf("%d",&n);
    int m;
   printf("Enter number of column:");
   scanf("%d",&m);
   printf("Enter all the elements\n");
   int arr[n][m];
   for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      scanf("%d ",&arr[i][j]) ; 
    }
   }
   //1 2 3
   //4 5 6
   
   //1 4
   //2 5
   //3 6
   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      printf("%d ",arr[j][i]) ; 
    }
    printf("\n");
   }
    return 0;
  }