#include<stdio.h>
int main( ){
    int n;
    printf("Enter number of size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    //int arr[8] = {1,2,3,4,5,6,7,8};
    for(int i=0; i<=n-1; i++){
        if(i%2!=0){
            printf("%d ",arr[i]=arr[i]*2); //arr[i]*=2;
        }
        else{
            printf("%d ",arr[i]=arr[i]+10); //arr[i]+=10;
        }
    }
    return 0;
}