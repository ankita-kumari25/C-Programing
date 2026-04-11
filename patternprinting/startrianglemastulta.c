#include<stdio.h>
int main(){
    int n;
    printf("enter no of lines:");
    scanf("%d",&n);
    int nsp=0;
    int nst=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){//spaces
            printf(" ");
        }
        for(int k=1; k<=nst; k++){//star
            printf("*");
        }
        nsp++;
        nst--;
        printf("\n");
    }
    return 0;
}