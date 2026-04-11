#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    printf("enter 1st num n:");
    scanf("%d",&n);
    printf("enter 2nd num m:");
    scanf("%d",&m);
    int q=pow(n,m);
    printf("%d",q);

    return 0;
}