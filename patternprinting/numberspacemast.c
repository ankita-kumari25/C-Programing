#include<stdio.h>
int main(){
    int n;
    printf("enter no of line:");
    scanf("%d",&n);
   /* 1234321
      123 321
      12   21
      1     1
      n=3*/
      
    int nst=n;
    int nsp=1;
    for(int i=1; i<=n+1; i++){//pehli line
        printf("%d",i);
    }
        for(int i=n; i>=1; i-- ){
            printf("%d",i);
        }
    
    printf("\n");
    for(int i=1; i<=n; i++){
        int a=1;
        for(int j=1; j<=nst; j++){//number
            printf("%d",a);
            a++;
        }
        for(int k=1; k<=nsp; k++){//spaces
            printf(" ");
        }
        a=nst;
        for(int j=nst; j>=1; j--){//numbers
            printf("%d",a);
            a--;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    
    
    return 0;
}
    
    
   