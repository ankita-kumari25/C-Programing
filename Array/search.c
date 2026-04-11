#include<stdio.h>
int main(){
    int n,x;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter x");
    scanf("%d",&x);
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=n-1; i++){
        if(arr[i]==x){
            printf("%d is present in the array and its index is %d \n",x,i);
           // break;
        }
    }
    return 0;
}
