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
    printf("enter number:n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("factorial of %d is:%d\n", i , factorial(i));
    }
    return 0;
}