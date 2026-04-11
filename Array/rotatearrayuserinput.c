#include<stdio.h>
void reverse(int arr[],int si, int ei){
    for(int i=si,j=ei; i<j; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int n;
    int k;
    printf("Enter size of array:");
    scanf("%d",&n);
     int arr[n];
    printf("Enter rotation step k:");
    scanf("%d",&k);
    //Enter array element
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    //steps
     k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    //print array after rotation
     for(int i=0; i<=n-1; i++){
        printf("%d ",arr[i]); 
    }
    
    return 0;
}