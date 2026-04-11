#include<stdio.h>
int main(){
    int n,m;
    printf("enter a number of row:");
    scanf("%d",&n);
    printf("enter a number of column:");
    scanf("%d",&m);
    //*****....upto n no of stars
    for(int i=1; i<=n; i++){//outer loop->no of lines
       for(int i=1; i<=m; i++){//inner loop->no of stars in each lines
        printf("*");
       } 
      printf("\n");//har line ke bad enter
    }
    return 0;
}