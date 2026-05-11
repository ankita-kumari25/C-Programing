#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int r=0;
    int sum=0;
    while(n!=0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
       sum=n+r; 
    }
    printf("the sum of reversed number and given number is %d",sum);
    return 0;
}