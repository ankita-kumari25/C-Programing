#include<stdio.h>
int main(){
    int a=25;
    int *x=&a;
    *x =7;// a is changed.
    printf("%d\n",a); // %p se address print hota hai
    return 0;
}