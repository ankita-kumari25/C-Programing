#include<stdio.h>
int main(){
    char arr[] = "College Walla is the best ";
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}
