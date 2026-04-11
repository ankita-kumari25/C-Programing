#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {12,54,68,-34,56,45,76};
    int min = INT_MAX;
    for(int i=0; i<=6; i++){
        if(min> arr[i]){
            min = arr[i];
        }
    }
    printf("min number is %d ",min);
    return 0;
}