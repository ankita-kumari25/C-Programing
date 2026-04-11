#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of arry:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for (int i=0; i<=n-1; i++){
        printf("%d ",arr[i]);
        sum=sum + arr[i];
    }
    printf("\n%d",sum);
    return 0;
}