#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of arry:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int max=-1; //sabse chota number
    for(int i=0; i<=n-1; i++){
       // printf("%d ",arr[i]);
        if(max < arr[i]){
            max=arr[i];
        }
       
    }
     printf("\nmaximum number is %d ",max);
    return 0;
}