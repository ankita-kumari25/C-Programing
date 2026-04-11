#include<stdio.h>
int main(){
    void india();//prototype declair
    india();//calling india
    return 0;
}
void australia(){
    printf("You are in australia\n");
    void england();
    england();//calling england
    return;
}
void india(){
    printf("You are in india\n");
    void australia();
    australia();//calling australia
    return;
}

void england(){
    printf("You are in england\n");
    return;
}