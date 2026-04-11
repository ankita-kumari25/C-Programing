#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
       scanf("%d",&arr[i]);
    }
    int i=0, j=n-1, flag=1;
    while (i<j){
       if(arr[i]!=arr[j]){
         flag =0;
         break;
        }
       i++;
       j--;
    }
    if(flag == 1) printf("Array is palindrome");
    else printf("Arry is not palindrome");
    return 0;
}