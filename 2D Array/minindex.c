#include<stdio.h>
#include<limits.h>
int main(){
    int min = INT_MAX;
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
        if(min>arr[i][j]){
         min = arr[i][j];
         n = i;
         m = j;
        }
    }
}
printf("\n mim value = %d",min);
printf("\nIndex position = Row %d , column %d",n,m);
return 0;
}
