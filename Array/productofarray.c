#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of arry:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int product=1;
    for(int i=0; i<=n-1; i++){
        printf("%d ",arr[i]);
        product=product*arr[i];
    }
    printf("\n%d",product);
    return 0;
}