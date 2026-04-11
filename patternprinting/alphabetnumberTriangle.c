#include<stdio.h>
int main(){
    int n;
    printf("enter no of row:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int a=1;
        for(int j=1; j<=i; j++){
            char ch=a+64;
            a++;
            if(i%2!=0){
             printf("%d ",j);
            }
            else{
                
                printf("%c ",ch);
            }
        }
        printf("\n");
    }
    return 0;
}