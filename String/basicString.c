#include<stdio.h>
int main(){
    char arr[] = {'A','n','k','i','t','a','\0'};
    char arr2[] = "Ankita";
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
    printf("%d",n);
    return 0;
}