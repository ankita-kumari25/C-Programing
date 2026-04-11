#include<stdio.h>
int main(){
    int a=25;
    int* x=&a;
    printf("%d\n",*x);//%p se address print hota hai
    return 0;
}