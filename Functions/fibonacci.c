#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int a=0;
    int b=1;
    printf("%d %d ",a,b);
    for(int i=1; i<=n; i++){
        int c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}