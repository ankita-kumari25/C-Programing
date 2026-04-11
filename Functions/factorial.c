#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("enter number n:");
    scanf("%d",&n);
    int a =factorial(n);
    printf("factorial of %d is:%d",n,a);
    return 0;
}