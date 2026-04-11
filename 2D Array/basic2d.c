#include<stdio.h>
int main(){
     //1 2
    //3 4
   /* int arr[2][2];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[1][0] = 3;
    arr[1][1] = 4;*/
    int arr [2][3]={{10,9,8},{7,6,5}};
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}