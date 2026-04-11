#include<stdio.h>
int main(){
    int roll;
    printf("Enter number of row:");
    scanf("%d",&roll);
    int marks;
    printf("Enter number of marks:");
    scanf("%d",&marks);
    int arr[roll][marks];
    for(int i=0; i<roll; i++){
        for(int j=0; j<marks; j++){
           scanf("%d ",&arr[i][j]);
        }
    }
     printf("\n");
    for(int i=0; i<roll; i++){
        for(int j=0; j<marks; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}