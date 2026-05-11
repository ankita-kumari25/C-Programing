#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sum=0;
    int digit=0;
    while(n!=0){
        digit=n%10;
        if(n %2!=0){
    sum=sum+digit ;
        }
    n=n/10;
    }
    printf("the sum of odd digit are %d",sum);
    return 0;
}