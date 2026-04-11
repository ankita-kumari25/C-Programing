#include<stdio.h>
int main(){
    int n;
    printf("enter no of lines:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){ //print spaces
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        //print number(1 to 2*i-1)
        for(int k=1; k<=2*i-1; k++){
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}