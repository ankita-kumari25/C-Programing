#include<stdio.h>
int main(){
    int n;
    printf("enter no of row:");
    scanf("%d",&n);
    int a=n;
    for(int i=1; i<=n; i++){//no of rows->i
        for(int j=1; j<=a; j++){//no of column->j
            printf("*");
        }
        a--;
        printf("\n");
    }
    return 0;
}