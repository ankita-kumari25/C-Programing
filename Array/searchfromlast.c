#include<stdio.h>
int main(){
    int arr[7] = {12,21,21,42,21,6,7};
    int x=21;
    for(int i=6; i>=0; i--){
        if(arr[i]==x){
            printf("%d is present in the array and its index is %d\n",x,i);
            break; //break represent only onr maching answer
        }
    }
    return 0;
}