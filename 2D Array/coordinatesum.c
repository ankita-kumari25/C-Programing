#include<stdio.h>
int main(){
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
    int r1, c1, r2, c2;
    printf("Enter top-left coordinate (r1 c1):");
    scanf("%d %d",&r1,&c1);
    printf("Enter bottom-right coordinate (r2 c2):");
    scanf("%d %d",&r2,&c2);
     int sum=0;
     printf("\n selected rectangle element:\n");
    for(int i=0; i<n; i++){
        for(int j=1; j<m; j++){
            printf("%d ",arr[i][j]);
          sum  += arr[i][j];
        }
        printf("\n");
    }
    printf("The sum of selected element is %d",sum);
    return 0;
}