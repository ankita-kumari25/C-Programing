#include<stdio.h>
int main(){
    int arr[7] = {12,21,21,42,21,6,7};
    int x=20;
    int check = 0; //0 means the element is not present
    for(int i=0; i<=6; i++){
        if (arr[i]==x){
            check = 1; // 1 means element is present
            break;
        }
        
    }
    if(check==0){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is present in the array",x);
    }
    return 0;
}