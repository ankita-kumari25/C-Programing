#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c;
    for(int i=1; i<=n-2; i++){
       c=a+b;
        a=b;
        b=c;
     //printf("%d ",c);   
    }
    printf("%d ",c); 
    return 0;
}