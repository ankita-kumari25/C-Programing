#include<stdio.h>
int main(){
    int n;
    int count=0;
    printf("Enter the size of arry:");
    scanf("%d",&n);
    int x;
    printf("Enter value of x:");
    scanf("%d",&x);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=n-1; i++){
        if(arr[i]>x){
            count++;
        }
    }
    printf("Number of elements greater than %d=%d",x,count);

    return 0;
}