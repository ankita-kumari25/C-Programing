#include<stdio.h>
int main(){
    int arr[3]; //={2,4,6,8,1};
    
    for(int i=0; i<=2; i++){
        int a= i+1;
        printf("Enter element number %d\n",i);
        scanf("%d",&arr[i]);
    }
    printf("%d",arr[1]);
    return 0;
}