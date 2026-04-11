#include<stdio.h>
int main(){
    int r;
    printf("Enter number of row:");
    scanf("%d",&r);
    int c;
    printf("Enter number of column:");
    scanf("%d",&c);
   int arr[r][c]; // total r*c element
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        scanf("%d",&arr[i][j]);
    }
   }
    printf("\n");
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
       printf("%d ",arr[i][j]);
    }
     printf("\n");
   }
    return 0;
}