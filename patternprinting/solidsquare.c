#include<stdio.h>
int main(){
    int n,m;
    printf("enter no of row:");
    scanf("%d",&n);
    printf("enter no of column:");
    scanf("%d",&m);
    for(int i=1; i<=n; i++){
        for(int i=1; i<=m; i++){
            printf("*");
        }
        printf("\n");
    }
}