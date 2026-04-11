#include<stdio.h>
void greating(int n){
    if(n==0) return;
    printf("Good morning\n");
    greating(n-1);
    return ;
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    greating(n);
    return 0;
}