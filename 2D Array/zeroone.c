#include<stdio.h>
int main(){
    int arr[3][4] = {{1,0,1,1},{0,1,0,1},{1,0,0,1}};
    //1 0 1 1
    //0 1 0 1
    //1 0 0 1
    int maxcount = 0;
    int rowIndex;
    for(int i=0; i<3; i++){
        int count =0;
        for(int j=0; j<4; j++){
           if(arr[i][j]==1) count++;
        }
        printf("Row %d has %d ones\n",i,count);
       if(maxcount < count){
        maxcount = count;
        rowIndex = i;
       }
       printf("\n");
    }
    printf("max count of 1's is %d",maxcount);
    printf("\nRow with max 1's =%d",rowIndex);
    return 0;
}