#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int sum; int i;
    printf("fibonacci series:");
    for(int i=1; i<=n; i++){
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}