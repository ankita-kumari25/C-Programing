#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of arry:");
    scanf("%d",&n);
    int evenSum=0;
    int oddSum=0;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=n-1; i++){
        if( i%2==0){
           evenSum=evenSum+arr[i];
          // printf("%d\n",evenSum);
        }
        if(i%2!=0){
            oddSum=oddSum+arr[i];
           //
            printf("%d\n",oddSum);
        }


    }
    int final=evenSum-oddSum;
    printf("Difference between evenSum & oddSum is%d",final);
   
    return 0;
}